import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class LetsMakeADeal {
    private String curtain1;
    private String curtain2;
    private String curtain3;
    private int contestant1;
    private int contestant2;
    private String first;
    private String second;
    private String third;

    public void setCurtains() {
        ArrayList<String> list = new ArrayList<String>();
        first = "First Prize!!!";
        second = "Second Prize!!!";
        third = "Third Prize!!!";

        list.add(first);
        list.add(second);
        list.add(third);

        Collections.shuffle(list);
        curtain1 = list.get(0);
        curtain2 = list.get(1);
        curtain3 = list.get(2);

        //System.out.println("Curtain 1: " + curtain1);
        //System.out.println("Curtain 2: " + curtain2);
        //System.out.println("Curtain 3: " + curtain3);
    }

    public void chooseCurtains() {
        boolean swap = false;
        int swapSuccess = 0;
        int swapFail = 0;
        int staySuccess = 0;
        int stayFail = 0;
        int worst = 0;

        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(1);
        list.add(2);
        list.add(3);

        for (int i = 0; i < 1000; i++) {
        Collections.shuffle(list);
        contestant1 = list.get(0);
        contestant2 = list.get(1);

        //System.out.println("Contestant 1: Curtain " + contestant1);
        //System.out.println("Contestant 2: Curtain " + contestant2);

        if (contestant1 == 1 && curtain1.equals(third)) {
            //System.out.println("Curtain 1: " + curtain1);
            worst = 1;
        }

        if (contestant1 == 2 && curtain2.equals(third)) {
            //System.out.println("Curtain 2: " + curtain2);
            worst = 1;
        }

        if (contestant1 == 3 && curtain3.equals(third)) {
            //System.out.println("Curtain 3: " + curtain3);
            worst = 1;
        }

        if (contestant2 == 1 && curtain1.equals(third)) {
            //System.out.println("Curtain 1: " + curtain1);
            worst = 2;
        }

        if (contestant2 == 2 && curtain2.equals(third)) {
            //System.out.println("Curtain 2: " + curtain2);
            worst = 2;
        }

        if (contestant2 == 3 && curtain3.equals(third)) {
            //System.out.println("Curtain 3: " + curtain3);
            worst = 2;
        }
        
        if (worst == 0) {
            if (contestant1 == 1 && curtain1.equals(second)) {
                //System.out.println("Curtain 1: " + curtain1);
                worst = 1;
            }

            if (contestant1 == 2 && curtain2.equals(second)) {
                //System.out.println("Curtain 2: " + curtain2);
                worst = 1;
            }

            if (contestant1 == 3 && curtain3.equals(second)) {
                //System.out.println("Curtain 3: " + curtain3);
                worst = 1;
            }

            if (contestant2 == 1 && curtain1.equals(second)) {
                //System.out.println("Curtain 1: " + curtain1);
                worst = 2;
            }

            if (contestant2 == 2 && curtain2.equals(second)) {
                //System.out.println("Curtain 2: " + curtain2);
                worst = 2;
            }

            if (contestant2 == 3 && curtain3.equals(second)) {
                //System.out.println("Curtain 3: " + curtain3);
                worst = 2;
            }
        }

        if (worst == 1) {
            //System.out.println("\nContestant 2...");
            //System.out.println("Would you like to switch your curtain?");
            //System.out.println("Betty: Switch!!!");
            //System.out.println("Jane: Don't Switch!!!\n"
            if (swap)
                contestant2 = list.get(2);

                if (contestant2 == 1 && curtain1.equals(first)) {
                    if (swap)
                        swapSuccess++;
                    else
                        staySuccess++;
                }

                if (contestant2 == 2 && curtain2.equals(first)) {
                    if (swap)
                        swapSuccess++;
                    else
                        staySuccess++;
                }

                if (contestant2 == 3 && curtain3.equals(first)) {
                    if (swap)
                        swapSuccess++;
                    else
                        staySuccess++;
                }

                if (contestant2 == 1 && !(curtain1.equals(first))) {
                    if (swap)
                        swapFail++;
                    else
                        stayFail++;
                }

                if (contestant2 == 2 && !(curtain2.equals(first))) {
                    if (swap)
                        swapFail++;
                    else
                        stayFail++;
                }

                if (contestant2 == 3 && !(curtain3.equals(first))) {
                    if (swap)
                        swapFail++;
                    else
                        stayFail++;
                }
            
        }
        
        if (worst == 2) {
            //System.out.println("\nContestant 1...");
            //System.out.println("Would you like to switch curtains?");
            //System.out.println("Betty: Switch!!!");
            //System.out.println("Jane: Don't Switch!!!\n");
            if (swap)
                contestant1 = list.get(2);

                if (contestant1 == 1 && curtain1.equals(first)) {
                    if (swap)
                        swapSuccess++;
                    else
                        staySuccess++;
                }

                if (contestant1 == 2 && curtain2.equals(first)) {
                    if (swap)
                        swapSuccess++;
                    else
                        staySuccess++;
                }

                if (contestant1 == 3 && curtain3.equals(first)) {
                    if (swap)
                        swapSuccess++;
                    else
                        staySuccess++;
                }

                if (contestant1 == 1 && !(curtain1.equals(first))) {
                    if (swap)
                        swapFail++;
                    else
                        stayFail++;
                }

                if (contestant1 == 2 && !(curtain2.equals(first))) {
                    if (swap)
                        swapFail++;
                    else
                        stayFail++;
                }

                if (contestant1 == 3 && !(curtain3.equals(first))) {
                    if (swap)
                        swapFail++;
                    else
                        stayFail++;
                }
            }
        }

        if (swap) {
            System.out.println("swapSuccess = " + swapSuccess);
            System.out.println("swapFailure = " + swapFail);
        } else {
            System.out.println("staySuccess = " + staySuccess);
            System.out.println("stayFailure = " + stayFail);
        }
    }

    public static void main(String[] args) {
        LetsMakeADeal deal = new LetsMakeADeal();

        deal.setCurtains();
        deal.chooseCurtains();
    }
}

