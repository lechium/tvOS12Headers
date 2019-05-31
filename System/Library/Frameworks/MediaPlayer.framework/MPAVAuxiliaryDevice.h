/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPAVAuxiliaryDevice : NSObject {

	BOOL _playing;
	NSString* _uniqueID;
	NSString* _productName;
	NSString* _deviceName;
	NSString* _modelIdentifier;

}

@property (nonatomic,readonly) NSString * uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSString * productName;                     //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * modelIdentifier;                 //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing;              //@synthesize playing=_playing - In the implementation block
+(id)otherConnectedDevicesFromRouteDescription:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)productName;
-(BOOL)isPlaying;
-(NSString *)deviceName;
-(NSString *)modelIdentifier;
-(id)initWithDictionary:(id)arg1 ;
@end

