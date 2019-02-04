static void Main(string[] args){
	string s = Console.Readline();
	string[] a = s.Split(' ');

	for(int i = 0; i < a.Length(); i++){
		int nums = int.Parse(a[i]);
		bool k = true;
		if(nums == 1){
			continue;
		}
		else{
			for(int j = 2; j <= Math.Sqrt(nums);j++){
				if(nums % j == 0){
					k =false;
				}
			}
		}
		if(k == true){
			Console.Write(a[i] + ' ');
		}
	}
	Console.ReadKey();
}