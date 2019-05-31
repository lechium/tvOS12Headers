/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BBAssociationSet : NSObject {

	NSString* _associationSetKey;
	unsigned long long _associatedObjectMemoryPointerFunction;

}
+(id)setWithStrongAssociation;
+(id)setWithWeakAssociation;
-(id)associatedObjectsForObject:(id)arg1 ;
-(void)associateObject:(id)arg1 withObject:(id)arg2 ;
-(void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2 ;
-(id)_initWithMemoryPointerFunction:(unsigned long long)arg1 ;
@end
