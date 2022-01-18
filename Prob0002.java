
class Prob0002
{
    public static void main(String[] args) {
        int prev = 1, current = 2, addn = 0;
        while(current <= 4000000)
        {
            if((current & 1) == 0)
            {
                addn += current;
            }
            current += prev;
            prev = current - prev;
        }
        System.out.println(addn);
    }
}