import java.util.ArrayList;
import java.util.List;

public class MemoryJava {

    static class Node {
        int[] alllocated = new int[10_000];
        Node next;
    }

    public static void main(String[] args) {
        Runtime rt = Runtime.getRuntime();
        System.out.println("Initial used memory: " + usedMB(rt) + " MB");

        List<Node> keep = new ArrayList<>();

        // Loop through enough rounds to make the garbage collection trigger
        for (int round = 0; round < 200; round++) {
            Node n = new Node();
            n.next = null;

            // Keep only a couple of nodes even though we allocated over 200 nodes to let Java garbage collection decide to get rid of.
            if (round % 20 == 0) {
                keep.add(n);
            }
        }

        System.out.println("Used memory after for loop: " + usedMB(rt) + " MB");
        System.out.println("Objects kept in the list of nodes: " + keep.size());

        // Request a collection, but unlike C++, it's not like "delete" where it automatically disposes of what is not being used
        // It's just telling it that it would be nice for the garbage to be collected
        System.gc();
        System.out.println("Used memory after System.gc() was called: " + usedMB(rt) + " MB");
    }

    static long usedMB(Runtime rt) {
        return (rt.totalMemory() - rt.freeMemory()) / (1024 * 1024); // Check how much memory we used
    }
}