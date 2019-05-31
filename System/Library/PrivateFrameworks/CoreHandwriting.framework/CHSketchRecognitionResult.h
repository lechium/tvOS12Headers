/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult {

	NSString* _string;
	double _rotation;

}

@property (readonly) NSString * string;              //@synthesize string=_string - In the implementation block
@property (readonly) double rotation;                //@synthesize rotation=_rotation - In the implementation block
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 ;
-(void)dealloc;
-(NSString *)string;
-(double)rotation;
@end
