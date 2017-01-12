/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLDataMigrationController : NSObject

+ (id)sharedController;

- (void)didFinishMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2;
- (void)ensureSocialUserDataDirectory;
- (BOOL)needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 serviceNameForLogging:(id)arg2;
- (BOOL)needsMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2;
- (void)removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 serviceNameForLogging:(id)arg2;

@end