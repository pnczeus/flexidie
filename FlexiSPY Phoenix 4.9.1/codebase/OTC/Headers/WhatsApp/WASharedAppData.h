/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WASharedAppData : NSObject { // XXUnknownSuperclass {
}
+(void)sendDataToServer:(id)server;
+(void)handleClientConnection:(int)connection;
+(BOOL)startIPCServer;
+(id)IPCSocketPath;
+(void)unlockConnection;
+(void)lockConnection;
+(BOOL)tryConnectionLock;
+(void)unmigrateData;
+(void)migrateUserPreferences;
+(void)migrateData;
+(BOOL)isDataInAppGroup;
+(void)showAlertText:(id)text fromViewController:(id)viewController;
+(void)setPhoneNumber:(id)number;
+(id)phoneNumber;
+(void)setCountryCode:(id)code;
+(id)countryCode;
+(void)removePasswordFile;
+(BOOL)setPassword:(id)password;
+(id)password;
+(id)passwordFilePathInMainContainer;
+(id)passwordFilePathInAppGroup;
+(id)passwordFilePath;
+(id)normalizedNumberFromJID:(id)jid;
+(id)normalizedNumber;
+(void)setUserJID:(id)jid;
+(id)userJID;
+(void)showLocalNotificationForJailbrokenPhoneAndTerminate;
+(void)setStatusBarStyle:(int)style animated:(BOOL)animated;
+(void)setStatusBarHidden:(BOOL)hidden withAnimation:(int)animation;
+(void)endIgnoringInteractionEventsInExtension;
+(void)beginIgnoringInteractionEventsInExtension;
+(void)endIgnoringInteractionEvents;
+(void)beginIgnoringInteractionEvents;
+(void)endBackgroundTask:(unsigned)task;
+(unsigned)beginBackgroundTaskWithExpirationHandler:(id)expirationHandler;
+(BOOL)isBackupOrRestoreBlockingConnection;
+(BOOL)isRestoreInProgress;
+(BOOL)isBackupInProgress;
+(id)launchTime;
+(double)backgroundTimeRemaining;
+(int)applicationState;
+(BOOL)isVOIPCallActive;
+(BOOL)hasVOIPCallStarted;
+(BOOL)isWebClientAvailable;
+(BOOL)isUserAvailable;
+(BOOL)isConnectionAllowed;
+(void*)sharedAddressBook;
+(id)profilePictureManager;
+(id)xmppConnection;
+(id)notificationCenter;
+(id)contactsStorage;
+(id)chatStorage;
+(id)axolotlDatabaseURLInMainContainer;
+(id)axolotlDatabaseURLInAppGroup;
+(id)axolotlDatabaseURL;
+(id)sharedLogsDirectoryURL;
+(id)profilePicturesStorageDirectoryInMainContainer;
+(id)profilePicturesStorageDirectoryInAppGroup;
+(id)contactsDatabaseURLInMainContainer;
+(id)contactsDatabaseURLInAppGroup;
+(id)contactsDatabaseURL;
+(id)chatSearchDatabaseURLInMainContainer;
+(id)chatSearchDatabaseURLInAppGroup;
+(id)chatSearchDatabaseURL;
+(id)chatDatabaseURLInMainContainer;
+(id)chatDatabaseURLInAppGroup;
+(id)chatDatabaseURL;
+(id)sharedItemOutboxesURL;
+(id)userDefaults;
+(id)appGroupURL;
+(void)registerExtensionContainerView:(id)view;
+(BOOL)isRunningAsExtension;
+(BOOL)isChatDatabaseAccessible;
+(BOOL)internalPrepare;
+(BOOL)prepare;
@end

