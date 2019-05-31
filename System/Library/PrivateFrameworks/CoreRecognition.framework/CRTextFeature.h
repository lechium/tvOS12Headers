/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString, CRImage;

@interface CRTextFeature : NSObject <NSCoding> {

	BOOL _shouldExpandToFullWidth;
	NSArray* _subFeatures;
	NSString* _stringValue;
	CRImage* _imageCut;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomLeft;
	CGPoint _bottomRight;
	CGRect _bounds;

}

@property (assign) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGPoint topLeft;                               //@synthesize topLeft=_topLeft - In the implementation block
@property (assign) CGPoint topRight;                              //@synthesize topRight=_topRight - In the implementation block
@property (assign) CGPoint bottomLeft;                            //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (assign) CGPoint bottomRight;                           //@synthesize bottomRight=_bottomRight - In the implementation block
@property (retain) NSArray * subFeatures;                         //@synthesize subFeatures=_subFeatures - In the implementation block
@property (assign) BOOL shouldExpandToFullWidth;                  //@synthesize shouldExpandToFullWidth=_shouldExpandToFullWidth - In the implementation block
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) CRImage * imageCut;                            //@synthesize imageCut=_imageCut - In the implementation block
+(id)textFeatureFromCITextFeature:(id)arg1 inImage:(id)arg2 ;
+(id)overlayFeatures:(id)arg1 onImage:(id)arg2 showSubFeatures:(BOOL)arg3 ;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(NSArray *)subFeatures;
-(void)setTopRight:(CGPoint)arg1 ;
-(void)setTopLeft:(CGPoint)arg1 ;
-(void)setBottomRight:(CGPoint)arg1 ;
-(void)setBottomLeft:(CGPoint)arg1 ;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(BOOL)shouldExpandToFullWidth;
-(void)setImageCut:(CRImage *)arg1 ;
-(void)addKohlsDigitProjection;
-(id)initWithVNTextObsevation:(id)arg1 ;
-(void)setShouldExpandToFullWidth:(BOOL)arg1 ;
-(id)initWithCITextFeature:(id)arg1 inImage:(id)arg2 ;
-(id)initWithCCFeatureRect:(id)arg1 subFeatureRects:(id)arg2 rotatePortrait:(BOOL)arg3 ;
-(id)initWithFeatureRect:(id)arg1 subFeatureRects:(id)arg2 ;
-(id)textFeatureScaledToImage:(id)arg1 ;
-(float)slopeOfSubFeatures;
-(CRImage *)imageCut;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
@end

