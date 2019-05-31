/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSArray;

@interface TVHKCollectionChange : NSObject {

	unsigned long long _changeKind;
	NSIndexSet* _sourceIndexes;
	NSIndexSet* _destinationIndexes;
	NSArray* _updateChanges;

}

@property (nonatomic,readonly) unsigned long long changeKind;                     //@synthesize changeKind=_changeKind - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sourceIndexes;                   //@synthesize sourceIndexes=_sourceIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * destinationIndexes;              //@synthesize destinationIndexes=_destinationIndexes - In the implementation block
@property (nonatomic,copy) NSArray * updateChanges;                               //@synthesize updateChanges=_updateChanges - In the implementation block
-(id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3 ;
-(unsigned long long)changeKind;
-(NSIndexSet *)sourceIndexes;
-(NSIndexSet *)destinationIndexes;
-(id)init;
-(id)description;
-(void)setUpdateChanges:(NSArray *)arg1 ;
-(NSArray *)updateChanges;
@end

