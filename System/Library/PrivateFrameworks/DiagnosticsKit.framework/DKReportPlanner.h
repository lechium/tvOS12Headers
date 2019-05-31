/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
@class DKReporterRegistry;

@interface DKReportPlanner : NSObject {

	DKReporterRegistry* _registry;

}

@property (nonatomic,retain) DKReporterRegistry * registry;              //@synthesize registry=_registry - In the implementation block
+(id)plannerWithReportGeneratorRegistry:(id)arg1 ;
-(DKReporterRegistry *)registry;
-(void)setRegistry:(DKReporterRegistry *)arg1 ;
-(NSArray*)requestGroupsForPredicateManifest:(NSSet*)arg1 ;
-(id)initWithReportGeneratorRegistry:(id)arg1 ;
-(NSSet*)_resolveComponentIdentityManifest:(NSSet*)arg1 ;
@end

