/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICLexiconManaging.h>

@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {

	NSMutableArray* _contactObservers;

}
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)unloadLexicons;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)hibernate;
-(void)warmUp;
-(id)init;
@end

