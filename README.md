
 - Code tự chấm bài dựa trên việc sinh test, code full(hoặc code trâu) và code mình muốn check xem nó đúng hay sai,có đột nhiên sinh lỗi ở test lớn hay không, có bị quá thời gian cho không. Mục dính để kiểm tra xem code full của mình dúng hay sai và nếu sai thì có thể lấy test sai đó kiểm tra tay(khi sinh testcase nhỏ có thể check tay được).

	Code Judge.cpp được phát triển từ code sinh test trên
	------------ VNOI.info: https://vnoi.info/wiki/algo/skill/viet-trinh-cham.md ----------


* Hướng dẫn dùng: 
	Trước khi sử dụng bạn phải vào phần __name_system.txt để đổi dòng thứ 6 thành link bạn để foder Judge(VD: E:\Judge)
	Nếu bạn muốn chấm 1 bài code nào đó(giả sử: ABC):

	- Đầu tiên bạn phải vào __name_and_testcase.txt, đổi các yếu tố cần thiết(Nhớ lưu lại sau khi chỉnh sửa).
		Dòng 1 là bài chấm(trong TH này thì đổi từ "Name_File" thành "ABC".
		Dòng 2 là số lượng testcase mà bạn muốn sinh.
		Dòng 3 là time_limit của bài đó. Đơn vị ms(mili sec).
		Dòng 4 là chế độ tính time_limit (= 1 thì nếu bài ABC.cpp của bạn nếu quá time limit thì ngưng chương trình, = 2 thì chương trình sẽ ngưng khi chương trình của bạn chạy chậm hơn time_limit so với ABC_judge.cpp.
		Dòng 5 là chế độ có lưu các test mình đã sinh(= 1 là có lưu, = 0 là không lưu) *Lưu ý, cần phải chỉnh sửa link ở dòng thứ 6 trong file __name_system.txt thành link folder này ở trên máy


	- Thứ 2 là bạn phải có 1 file ABC.cpp(file bạn muốn chấm) và ABC_judge.cpp( file chứa code trâu của bạn hoặc code full của thằng nào đó). (nếu lười tạo file ABC.cpp và ABC_judge.cpp thì bạn có thể run file __make_file.cpp để tạo ra 2 file ABC.cpp và ABC_judge.cpp). 

	- Sau đó bạn phải code 1 code sinh test trong file __Make_Test.cpp(trong file có sẵn template rồi bạn chỉ cần code trong hàm make_test() được đặt ở sau đống coment trái tim các thứ ấy, hoặc nếu không thích template đó thì có thể code luôn 1 cái code mới(code phải có chức năng là tạo ra 1 file ABC.inp và test đúng theo yêu cầu của bài ABC)
		
	- Cuối cùng, bạn chỉ cần run file __Judge.cpp(hoặc nhấn vào file __Judge.exe(nếu có sẵn) để đỡ tốn thời gian dịch). Chú ý, khi run file thì nó sẽ hiển thị thời gian chạy cho mỗi lượt chấm, và mỗi test được sinh ra nó sẽ lưu vào foder ABC, bạn có thể zip nó lại và ném lên trang web nctoj.info để chạy bài đó.

		
	- Sau cùng, để dọn dẹp đống rác(mấy cái file với foder ABC) đó, bạn xóa từng cái một :)), đùa thôi, code tự chấm bài của mình có hỗ trợ một file code là __delete_file.cpp, bạn chỉ cần run nó(hoặc nhấn vào file __delete_file.exe(nếu có sẵn) để đỡ tốn thời gian dịch), sau khi run file đó, nó sẽ tự động xóa hết toàn bộ file với foder có tên ABC và bạn đỡ mỏi tay rồi :v

* Lưu ý, toàn bộ quá trình trên đều phải thông qua các file chứa dữ liệu để lấy tên bài ABC, số testcase cần chấm, time limit, ...  trong file __name_and_testcase.txt và 1 số tên file, link trong __name_system.txt, chỉ số của testcase đang chạy trong file __tmp.txt, các bạn tuyệt đối không được xóa các file đó trong lúc chạy. 

* Có thể bạn chưa biết, template của file __make_Test.cpp để sinh test này có thể lấy tên bài trong file: __name_and_testcase.txt, lấy index_test(chỉ số của test đang chạy) trong file __tmp.txt. nên bạn không cần freopen lại trong file __make_Test.cpp và có thể lấy index_test để tạo test to dần theo số test để chấm được tốt hơn.                                                                                                       --- Tác giả: Nguyễn Trường Giang ---
