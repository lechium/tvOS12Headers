/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
@class TVHKMediaEntityIdentifier;

@interface TVHKFace : NSObject {

	TVHKMediaEntityIdentifier* _identifier;
	CGRect _fractionalRect;

}

@property (nonatomic,retain) TVHKMediaEntityIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect fractionalRect;                               //@synthesize fractionalRect=_fractionalRect - In the implementation block
+(CGRect)_fractionRectFromStringRepresentation:(id)arg1 ;
+(id)_stringRepresentationFromFractionRect:(CGRect)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(CGRect)fractionalRect;
-(void)setFractionalRect:(CGRect)arg1 ;
-(TVHKMediaEntityIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(id)stringRepresentation;
@end
