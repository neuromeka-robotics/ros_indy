#include "TrajectoryDownloader/JointTrajectoryDownloader.h"

int main(int argc, char** argv)
{
  // initialize node
  ros::init(argc, argv, "joint_motion_interface");

  // launch the default JointTrajectoryDownloader connection/handlers
  JointTrajectoryDownloader jmotionInterface;
  jmotionInterface.init();
  jmotionInterface.run();

  return 0;
}