/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITraitStorage.h>

@class NSOrderedSet;

@interface _UIRelationshipTraitStorage : _UITraitStorage {

	NSOrderedSet* _relationshipCandidates;

}
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3 ;
-(void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
@end

