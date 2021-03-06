/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MDLTSUAssertionHandler : NSObject
+(void)simulateCrashWithMessage:(id)arg1 ;
+(int)_atomicIncrementAssertCount;
+(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(BOOL)arg4 description:(const char*)arg5 ;
+(void)logFullBacktrace;
+(id)p_performBlockIgnoringAssertions:(/*^block*/id)arg1 onlyFatal:(BOOL)arg2 ;
+(void)_logBacktraceWithCallStackSymbols:(id)arg1 ;
+(id)packedBacktraceStringWithReturnAddresses:(id)arg1 ;
+(id)performBlockIgnoringAssertions:(/*^block*/id)arg1 ;
+(id)performBlockIgnoringFatalAssertions:(/*^block*/id)arg1 ;
+(id)packedBacktraceString;
+(void)initialize;
@end

