/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject <NSCoding> {

	id _topLevelObject;
	NSArray* _traitStorages;
	NSSet* _descendants;

}

@property (nonatomic,__weak,readonly) id topLevelObject;              //@synthesize topLevelObject=_topLevelObject - In the implementation block
@property (nonatomic,readonly) NSArray * traitStorages;               //@synthesize traitStorages=_traitStorages - In the implementation block
@property (nonatomic,readonly) NSSet * descendants;                   //@synthesize descendants=_descendants - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)topLevelObject;
-(NSArray *)traitStorages;
-(id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3 ;
-(NSSet *)descendants;
@end

