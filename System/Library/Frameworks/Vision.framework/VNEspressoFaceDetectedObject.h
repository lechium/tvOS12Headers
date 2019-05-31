/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/ExternalDetectedObject.h>

@class NSString;

@interface VNEspressoFaceDetectedObject : NSObject <ExternalDetectedObject> {

	float _confidence;
	CGPoint _center;
	CGRect _bounds;

}

@property (nonatomic,readonly) float confidence;                    //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long objectType; 
@property (assign) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGPoint center;                                  //@synthesize center=_center - In the implementation block
-(long long)objectType;
-(id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4 ;
-(void)setObjectType:(long long)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGPoint)center;
-(float)confidence;
@end
