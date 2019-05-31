/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDHelperExternalProtocol;
@interface HMDHelper : NSObject {

	id<HMDHelperExternalProtocol> _externalProtocol;

}

@property (nonatomic,retain) id<HMDHelperExternalProtocol> externalProtocol;              //@synthesize externalProtocol=_externalProtocol - In the implementation block
+(void)setSharedHelper:(id)arg1 ;
+(id)sharedHelper;
-(id)initWithExternalProtocol:(id)arg1 ;
-(id)hashedRouteIDForIdentifier:(id)arg1 ;
-(id<HMDHelperExternalProtocol>)externalProtocol;
-(void)setExternalProtocol:(id<HMDHelperExternalProtocol>)arg1 ;
@end

