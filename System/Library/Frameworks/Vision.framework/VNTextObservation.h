/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNTextObservation : VNRectangleObservation {

	NSArray* _characterBoxes;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * characterBoxes; 
@property (nonatomic,copy,readonly) NSString * text; 
+(BOOL)supportsSecureCoding;
-(void)setCharacterBoxes:(NSArray *)arg1 ;
-(NSArray *)characterBoxes;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end

