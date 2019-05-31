/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMDiagnostics.h>

@interface AXMInertDiagnostics : AXMDiagnostics
+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(void)clearMetrics;
-(id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(/*^block*/id)arg3 ;
-(void)addMetric:(id)arg1 ;
-(id)startMeasurement:(long long)arg1 name:(id)arg2 ;
-(BOOL)diagnosticsEnabled;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)metrics;
@end

