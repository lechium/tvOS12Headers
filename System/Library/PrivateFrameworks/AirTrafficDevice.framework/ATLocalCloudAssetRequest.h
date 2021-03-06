/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATAsset, NSFileHandle;

@interface ATLocalCloudAssetRequest : NSObject {

	ATAsset* _asset;
	NSFileHandle* _fileHandle;
	double _startTime;

}

@property (nonatomic,retain) ATAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setAsset:(ATAsset *)arg1 ;
-(ATAsset *)asset;
@end

