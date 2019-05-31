/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSArray;

@interface VMUProcInfo : NSObject {

	unsigned _task;
	BOOL _needTaskPortDealloc;
	NSString* _name;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;

}
+(id)getProcessIds;
+(int)processParentId:(int)arg1 ;
+(BOOL)isProcessRunning:(int)arg1 ;
-(BOOL)terminate;
-(id)initWithPid:(int)arg1 ;
-(int)cpuType;
-(id)valueForEnvVar:(id)arg1 ;
-(id)envVars;
-(BOOL)isApp;
-(id)realAppName;
-(id)userAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)procTableName;
-(id)firstArgument;
-(id)requestedAppName;
-(BOOL)isCFM;
-(BOOL)isMachO;
-(BOOL)isNative;
-(BOOL)signal:(int)arg1 ;
-(long long)compareByName:(id)arg1 ;
-(long long)compareByUserAppName:(id)arg1 ;
-(int)pid;
-(id)arguments;
-(int)ppid;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)update;
-(id)name;
-(unsigned long long)hash;
-(id)description;
-(timeval)startTime;
-(BOOL)isRunning;
-(long long)compare:(id)arg1 ;
-(unsigned)task;
-(id)initWithTask:(unsigned)arg1 ;
@end
