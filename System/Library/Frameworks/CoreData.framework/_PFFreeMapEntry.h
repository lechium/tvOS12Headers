/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _PFFreeMapEntry : NSObject {

	int _retainCount;
	NSMutableSet* _owners;

}
-(void)addOwner:(id)arg1 ;
-(void)removeOwner:(id)arg1 ;
-(void)removeAllOwners;
-(BOOL)decrement;
-(id)init;
-(void)dealloc;
@end
