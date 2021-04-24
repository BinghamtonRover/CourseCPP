#include <iostream>

namespace Subsystem{
namespace Drive{
    class DriveSubsystem{
    public:
        DriveSubsystem(){}
        ~DriveSubsystem(){}
    };
    void connect(DriveSubsystem &da){
        std::cout << "Connected drive subsystem" << std::endl;
    }

    void disconnect(DriveSubsystem &da){
        std::cout << "Disconnected drive subsystem" << std::endl;
    }
}

namespace Arm{
    class ArmSubsystem{
    public:
        ArmSubsystem(){}
        ~ArmSubsystem(){}
    };
    void connect(ArmSubsystem &as){
            std::cout << "Connected arm subsystem" << std::endl;
    }

    void disconnect(ArmSubsystem &as){
        std::cout << "Disconnected arm subsystem" << std::endl;
    }
}
}

int main(){
    Subsystem::Drive::DriveSubsystem drive_sub;
    Subsystem::Arm::ArmSubsystem arm_sub;
    
    Subsystem::Drive::connect(drive_sub);
    Subsystem::Arm::connect(arm_sub);
    Subsystem::Drive::disconnect(drive_sub);
    Subsystem::Arm::disconnect(arm_sub);

    using namespace Subsystem::Drive;
    using namespace Subsystem::Arm;
    connect(drive_sub);
    connect(arm_sub);
    disconnect(drive_sub);
    disconnect(arm_sub);
}