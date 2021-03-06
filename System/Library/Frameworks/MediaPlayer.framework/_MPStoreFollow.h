/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface _MPStoreFollow : NSObject {

	NSNumber* _targetEntityID;
	long long _targetEntityType;

}

@property (nonatomic,retain) NSNumber * targetEntityID;               //@synthesize targetEntityID=_targetEntityID - In the implementation block
@property (assign,nonatomic) long long targetEntityType;              //@synthesize targetEntityType=_targetEntityType - In the implementation block
+(id)followWithPerson:(id)arg1 ;
+(id)followWithStoreDictionary:(id)arg1 ;
-(NSNumber *)targetEntityID;
-(void)setTargetEntityID:(NSNumber *)arg1 ;
-(void)setTargetEntityType:(long long)arg1 ;
-(long long)targetEntityType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

