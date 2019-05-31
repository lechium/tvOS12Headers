/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateSmartCamprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _returnAllResults;

}

@property (assign,nonatomic) BOOL returnAllResults;              //@synthesize returnAllResults=_returnAllResults - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(BOOL)returnAllResults;
-(void)setReturnAllResults:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
