/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSString, CIBarcodeDescriptor, NSDictionary;

@interface VNBarcodeObservation : VNRectangleObservation {

	NSString* _cachedPayloadStringValue;
	NSString* _symbology;
	CIBarcodeDescriptor* _barcodeDescriptor;
	NSDictionary* _acbsBarcodeInfo;

}

@property (setter=setACBSBarcodeInfo:,nonatomic,copy) NSDictionary * acbsBarcodeInfo;              //@synthesize acbsBarcodeInfo=_acbsBarcodeInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbology;                                          //@synthesize symbology=_symbology - In the implementation block
@property (nonatomic,readonly) CIBarcodeDescriptor * barcodeDescriptor;                            //@synthesize barcodeDescriptor=_barcodeDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * payloadStringValue; 
+(BOOL)supportsSecureCoding;
-(void)setACBSBarcodeInfo:(id)arg1 ;
-(NSString *)symbology;
-(CIBarcodeDescriptor *)barcodeDescriptor;
-(NSDictionary *)acbsBarcodeInfo;
-(NSString *)payloadStringValue;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 topLeft:(CGPoint)arg4 bottomLeft:(CGPoint)arg5 bottomRight:(CGPoint)arg6 topRight:(CGPoint)arg7 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 boundingBox:(CGRect)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
