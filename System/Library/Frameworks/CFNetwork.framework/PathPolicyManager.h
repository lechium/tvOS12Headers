/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PathPolicyManager : NSObject {

	NSMutableDictionary* _pathToPathId;
	long long _nextPathId;

}
-(id)pathIDForPath:(id)arg1 lookup:(BOOL)arg2 ;
-(void)removeAllEntries;
-(id)init;
-(void)dealloc;
@end
