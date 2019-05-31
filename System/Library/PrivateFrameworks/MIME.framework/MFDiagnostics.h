/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class MFWeakSet, NSLock, NSString;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator> {

	MFWeakSet* _diagnosticsGenerators;
	NSLock* _diagnosticLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)copyDiagnosticInformation;
-(void)addDiagnosticsGenerator:(id)arg1 ;
-(void)removeDiagnosticsGenerator:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

