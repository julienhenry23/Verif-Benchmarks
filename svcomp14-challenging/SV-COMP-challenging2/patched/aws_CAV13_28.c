extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int unknown1();
int unknown2();
int unknown3();
int unknown4();


/*
 * From CAV'12 by Sharma et al.
 */

void main() {
  int x=0;
  int y=0;
  int n = 0;
  while(unknown1()) {
      x++;
      y++;
  }
  while(x <= n - 1 || x >= n + 1) {
      x--;
      y--;
  }
  if(x != n)
    return;
	if (!(y == n)) {
ERROR:
		__VERIFIER_error();
		goto ERROR;
	}
}