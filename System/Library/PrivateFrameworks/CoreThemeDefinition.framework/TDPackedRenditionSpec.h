/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDThemeCompressionType;

@interface TDPackedRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(id)renditionPackName;
@end
