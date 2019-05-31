/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface DKDiagnosticParameters : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _predicates;
	NSDictionary* _specifications;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) NSDictionary * predicates;                  //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,readonly) NSDictionary * specifications;              //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                  //@synthesize parameters=_parameters - In the implementation block
+(id)diagnosticParametersWithDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSDictionary *)predicates;
-(NSDictionary *)specifications;
-(id)_decoderClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)parameters;
@end

