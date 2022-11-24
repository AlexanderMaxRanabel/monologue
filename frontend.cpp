#include <iostream>

using namespace std;

int main()
{
    cout << "$$\      $$\                               $$\ " << endl;
    cout << "$$$\    $$$ |                              $$ | "<<endl;
    cout << "$$$$\  $$$$ | $$$$$$\  $$$$$$$\   $$$$$$\  $$ | $$$$$$\   $$$$$$\  $$\   $$\  $$$$$$\ "<<endl;
    cout << "$$\$$\$$ $$ |$$  __$$\ $$  __$$\ $$  __$$\ $$ |$$  __$$\ $$  __$$\ $$ |  $$ |$$  __$$\ " << endl;
    cout << "$$ \$$$  $$ |$$ /  $$ |$$ |  $$ |$$ /  $$ |$$ |$$ /  $$ |$$ /  $$ |$$ |  $$ |$$$$$$$$ |"<< endl;
    cout << "$$ |\$  /$$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$   ____" << endl;
    cout << "$$ | \_/ $$ |\$$$$$$  |$$ |  $$ |\$$$$$$  |$$ |\$$$$$$  |\$$$$$$$ |\$$$$$$  |\$$$$$$$\ " << endl;
    cout << "\__|     \__| \______/ \__|  \__| \______/ \__| \______/  \____$$ | \______/  \_______" << endl;
    cout << "                                                         $$\   $$ |               " << endl;
    cout << "                                                         \$$$$$$  |  " << endl;
    cout << "                                                          \______/" << endl; 


    cout << "Version 0.0.5 Monologue Foundation " << endl;
    cout << "Monologue is a p2p file sharer that does things differents" << endl;
    cout << "Type help for current commands" << endl;
    cout << "Type start to start process" << endl;

    string q[500];
    /*/string start;
      
    cin >> start;
    while(start=="start")*/

    cin >> q[0];
    if (q[0] == "help")
        cout << "syntax_help:Shows how you should write commands,monoloadhelp:shows help for monoload version control,scanip:scans ip addresse,scanpackage-local:scans packages in local network,scanpackage-select:scans packages coming to a specific ip address,monop2p starts new instance for monotone p2p file sharer(can be disabled with monop2p-disable)";
    else if (q[0] == "syntax_help")
        cout << "[command pure]+[variant] [additions] enable/disable";
    else if (q[0] == "monoload_help")
        cout << "monoload clone-self [url]:clones said repo to local computer,monoload clone-forceip [ip] [url] clones said repo forcefully to said ip address/computer,monoload clone-askip [ip] [url],ask to said ip then clones the said repo,monoload control-self [path] [clone name]:";
    else if (q[0] == "scanip")
        cout << "currently unavaible";
    else if (q[0] == "monoload clone-self")
        cout << "unavaible" << endl;
    else if (q[0] == "scanpackage-local")
        cout << "Unavaible" << endl;
    else if (q[0] == "scanpackage-local")
        cout << "proccess is started" << endl;
   
    cin >> q[0];
    if (q[0] == "help")
        cout << "syntax_help:Shows how you should write commands,monoloadhelp:shows help for monoload version control,scanip:scans ip addresse,scanpackage-local:scans packages in local network,scanpackage-select:scans packages coming to a specific ip address,monop2p starts new instance for monotone p2p file sharer(can be disabled with monop2p-disable)";
    else if (q[0] == "syntax_help")
        cout << "[command pure]+[variant] [additions] enable/disable";
    else if (q[0] == "monoload-help")
        cout << "monoload clone-self [url]:clones said repo to local computer,monoload clone-forceip [ip] [url] clones said repo forcefully to said ip address/computer,monoload clone-askip [ip] [url],ask to said ip then clones the said repo,monoload control-self [path] [clone name]:";
    else if (q[0] == "scanip")
        cout << "currently unavaible";
    else if (q[0] == "monoload clone-self")
        cout << "unavaible" << endl;
    else if (q[0] == "scanpackage-local")
        cout << "Unavaible" << endl;
    else if (q[0] == "scanpackage-local")
        cout << "proccess is started" << endl;
   
    cin >> q[2];
    if (q[2] == "help")
        cout << "syntax_help:Shows how you should write commands,monoloadhelp:shows help for monoload version control,scanip:scans ip addresse,scanpackage-local:scans packages in local network,scanpackage-select:scans packages coming to a specific ip address,monop2p starts new instance for monotone p2p file sharer(can be disabled with monop2p-disable)";
    else if (q[2] == "syntax_help")
        cout << "[command pure]+[variant] [additions] enable/disable";
    else if (q[2] == "monoload_help")
        cout << "monoload clone-self [url]:clones said repo to local computer,monoload clone-forceip [ip] [url] clones said repo forcefully to said ip address/computer,monoload clone-askip [ip] [url],ask to said ip then clones the said repo,monoload control-self [path] [clone name]:";
    else if (q[2] == "scanip")
        cout << "currently unavaible";
    else if (q[2] == "monoload clone-self")
        cout << "unavaible" << endl;
    else if (q[2] == "scanpackage-local")
        cout << "Unavaible" << endl;
    else if (q[2] == "scanpackage-local")
        cout << "proccess is started" << endl;

    cin >> q[3];
    if (q[3] == "help")
        cout << "syntax_help:Shows how you should write commands,monoloadhelp:shows help for monoload version control,scanip:scans ip addresse,scanpackage-local:scans packages in local network,scanpackage-select:scans packages coming to a specific ip address,monop2p starts new instance for monotone p2p file sharer(can be disabled with monop2p-disable)";
    else if (q[3] == "syntax_help")
        cout << "[command pure]+[variant] [additions] enable/disable";
    else if (q[3] == "monoload_help")
        cout << "monoload clone-self [url]:clones said repo to local computer,monoload clone-forceip [ip] [url] clones said repo forcefully to said ip address/computer,monoload clone-askip [ip] [url],ask to said ip then clones the said repo,monoload control-self [path] [clone name]:";
    else if (q[3] == "scanip")
        cout << "currently unavaible";
    else if (q[3] == "monoload clone-self")
        cout << "unavaible" << endl;
    else if (q[3] == "scanpackage-local")
        cout << "Unavaible" << endl;
    else if (q[3] == "scanpackage-local")
        cout << "proccess is started" << endl;

    cin >> q[4];
    if (q[4] == "help")
        cout << "syntax_help:Shows how you should write commands,monoloadhelp:shows help for monoload version control,scanip:scans ip addresse,scanpackage-local:scans packages in local network,scanpackage-select:scans packages coming to a specific ip address,monop2p starts new instance for monotone p2p file sharer(can be disabled with monop2p-disable)";
    else if (q[4] == "syntax_help")
        cout << "[command pure]+[variant] [additions] enable/disable";
    else if (q[4] == "monoload_help")
        cout << "monoload clone-self [url]:clones said repo to local computer,monoload clone-forceip [ip] [url] clones said repo forcefully to said ip address/computer,monoload clone-askip [ip] [url],ask to said ip then clones the said repo,monoload control-self [path] [clone name]:";
    else if (q[4] == "scanip")
        cout << "currently unavaible";
    else if (q[4] == "monoload clone-self")
        cout << "unavaible" << endl;
    else if (q[4] == "scanpackage-local")
        cout << "Unavaible" << endl;
    else if (q[4] == "scanpackage-local")
        cout << "proccess is started" << endl;


    return 0;
}