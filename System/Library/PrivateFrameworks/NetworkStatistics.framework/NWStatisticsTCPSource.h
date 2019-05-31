/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsTCPSource : NWStatisticsSource {

	nstat_tcp_descriptor _descriptor;

}
-(id)initWithManager:(id)arg1 local:(const sockaddr*)arg2 remote:(const sockaddr*)arg3 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_currentSnapshot;
-(id)description;
@end

