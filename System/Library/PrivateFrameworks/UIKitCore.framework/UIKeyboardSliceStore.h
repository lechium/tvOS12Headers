/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface UIKeyboardSliceStore : NSObject {

	NSMutableDictionary* _store;

}
+(id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3 ;
+(void)archiveSet:(id)arg1 ;
+(id)sharedStore;
+(id)sliceSetForID:(id)arg1 ;
-(id)init;
-(id)sliceSetForID:(id)arg1 ;
-(void)addSet:(id)arg1 ;
@end

