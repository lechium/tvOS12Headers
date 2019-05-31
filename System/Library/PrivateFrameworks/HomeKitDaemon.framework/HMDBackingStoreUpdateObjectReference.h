/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSUUID;

@interface HMDBackingStoreUpdateObjectReference : NSOperation {

	id _object;
	NSUUID* _uuid;

}

@property (assign,nonatomic,__weak) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                 //@synthesize uuid=_uuid - In the implementation block
-(id)initWithObject:(id)arg1 uuid:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)object;
-(void)main;
-(void)setObject:(id)arg1 ;
@end

