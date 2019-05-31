/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSString, HMDPairedSync, HMDWatchSync;

@interface HMDWatchSyncState : HMFObject {

	NSMutableArray* _syncs;
	NSString* _deviceId;
	HMDPairedSync* _pairedSync;

}

@property (nonatomic,copy,readonly) NSString * deviceId;                //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) HMDWatchSync * currentSync; 
@property (nonatomic,readonly) HMDPairedSync * pairedSync;              //@synthesize pairedSync=_pairedSync - In the implementation block
+(id)optionAsString:(unsigned long long)arg1 ;
+(BOOL)isNewBetter:(unsigned long long)arg1 present:(unsigned long long)arg2 ;
+(id)resultAsString:(unsigned long long)arg1 ;
-(NSString *)deviceId;
-(HMDPairedSync *)pairedSync;
-(BOOL)removeSync;
-(id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2 ;
-(HMDWatchSync *)currentSync;
-(void)addNewSync:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
@end

