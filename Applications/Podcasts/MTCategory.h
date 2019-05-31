//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString;

@interface MTCategory : NSManagedObject
{
}

+ (id)rootCategoriesInManagedObjectContext:(id)arg1;	// IMP=0x0000000100051fc8
+ (id)categoryUuidForName:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x0000000100051974
+ (id)categoryForName:(id)arg1 managedObjectContext:(id)arg2 insertIfNeeded:(_Bool)arg3;	// IMP=0x00000001000517b8
- (id)podcastUuids;	// IMP=0x0000000100052090
- (id)parentId;	// IMP=0x0000000100051e88
- (id)subCategoryIds;	// IMP=0x0000000100051d94
- (void)addPodcastUuid:(id)arg1;	// IMP=0x0000000100051bbc
@property(retain, nonatomic) NSString *parentUuid; // @dynamic parentUuid;

// Remaining properties
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long parentStoreId; // @dynamic parentStoreId;
@property(nonatomic) long long storeId; // @dynamic storeId;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

