//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTLibraryMigrationUtil : NSObject
{
}

+ (void)migrateDatabasePropertiesToSharedContainerIfNeeded;	// IMP=0x00000001001a8300
+ (_Bool)createPersistentStoreForModel:(id)arg1 attemptMigration:(_Bool)arg2;	// IMP=0x00000001001a7ff4
+ (_Bool)isMomCompatible:(id)arg1;	// IMP=0x00000001001a7f88
+ (_Bool)needsDataMigration;	// IMP=0x00000001001a7f5c
+ (_Bool)needsCoreDataMigration;	// IMP=0x00000001001a7efc
+ (_Bool)isNewInstall;	// IMP=0x00000001001a7e48

@end

