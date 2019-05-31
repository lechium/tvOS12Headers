/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface AFImagePNGData : NSObject {

	NSData* _imageData;
	double _scale;

}

@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) double scale;                    //@synthesize scale=_scale - In the implementation block
-(NSData *)imageData;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
@end
