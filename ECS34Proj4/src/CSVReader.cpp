#include "CSVReader.h"




        
  
CCSVReader::CCSVReader(std::istream &in){

}

CCSVReader:: ~CCSVReader(){

}
        
bool CCSVReader::End() const{

}

bool CCSVReader::ReadRow(std::vector< std::string > &row){
    
}

/*csv_struct;
csv_init()
csv_fini()
csv_parse()

class Reader{
    istream& In;
    csv_struct Data;
    list(vector < string) Buffered;
};

Reader(istream& in) : In(in){
    csv_init(&Data);
}

~Reader() {
    csv_fini(&Data);????
}

Callback(void calldata, int type, const char* data){
    Reader* Ptr = static::const<Reader*>(call data);
    if (type == csv_col){
        Ptr->CurRow push_back(data);
    }
    else(....row ? ? ?){
        Ptr->Buffer.push_back(CurRow);
        Ptr->Cur.Row.clean();
    }
}

ReadRow(vector < string & row){
    while (Buffer.empty()){
        TempData[128];
        In.read(TempData, sizeof(TempData));
        BytesRead = In.gcount();
        csv_parse(&Data, this, Callback, TempData, BytesRead);
    }
    if (!Buffer.empty()){
        row = Buffer.pop_front();
    }
}*/