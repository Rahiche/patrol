@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface PatrolUtils : NSObject

/// Converts test group names in Dart (generated by Patrol CLI) into a valid Objective-C method name.
+ (NSString *)createMethodNameFromPatrolGeneratedGroup:(NSString *)dartTestGroup;
+ (NSString *)convertFirstPart:(NSString *)filePath;
+ (NSString *)convertSecondPart:(NSString *)filePath;
@end

NS_ASSUME_NONNULL_END