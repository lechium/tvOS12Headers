/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASTConnectionUtilities : NSObject
+(BOOL)isGzipEnabled;
+(BOOL)isValidResponse:(id)arg1 ;
+(BOOL)didEncounterNetworkDisconnectionError:(id)arg1 ;
+(BOOL)trustIsValidWithProtectionSpace:(id)arg1 rootOfTrust:(unsigned long long)arg2 ;
+(id)MD5HeaderValueForTask:(id)arg1 ;
+(BOOL)relaxTimeouts;
+(id)getServerLoggingSelection;
+(BOOL)useChunkedTransferEncoding;
+(unsigned long long)allowCellularSizeThreshold;
@end

