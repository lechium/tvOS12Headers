/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject {

	CRCameraReaderOutputInternal* _objectInternal;

}

@property (retain) CRCameraReaderOutputInternal * objectInternal;              //@synthesize objectInternal=_objectInternal - In the implementation block
@property (readonly) NSString * type; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSString * formattedStringValue; 
-(void)setObjectInternal:(CRCameraReaderOutputInternal *)arg1 ;
-(CRCameraReaderOutputInternal *)objectInternal;
-(NSString *)formattedStringValue;
-(id)init;
-(void)dealloc;
-(NSString *)stringValue;
-(NSString *)type;
@end

