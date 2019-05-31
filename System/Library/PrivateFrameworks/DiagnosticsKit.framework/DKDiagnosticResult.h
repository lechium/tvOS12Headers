/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDictionary, NSArray;

@interface DKDiagnosticResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSNumber* _statusCode;
	NSDictionary* _data;
	NSArray* _files;

}

@property (nonatomic,readonly) NSNumber * statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSArray * files;                    //@synthesize files=_files - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)files;
-(id)initWithMutableResult:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)data;
-(NSNumber *)statusCode;
@end

