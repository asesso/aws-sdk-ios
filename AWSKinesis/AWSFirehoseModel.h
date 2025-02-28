//
// Copyright 2010-2023 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import <AWSCore/AWSNetworking.h>
#import <AWSCore/AWSModel.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const AWSFirehoseErrorDomain;

typedef NS_ENUM(NSInteger, AWSFirehoseErrorType) {
    AWSFirehoseErrorUnknown,
    AWSFirehoseErrorConcurrentModification,
    AWSFirehoseErrorInvalidArgument,
    AWSFirehoseErrorInvalidKMSResource,
    AWSFirehoseErrorInvalidSource,
    AWSFirehoseErrorLimitExceeded,
    AWSFirehoseErrorResourceInUse,
    AWSFirehoseErrorResourceNotFound,
    AWSFirehoseErrorServiceUnavailable,
};

typedef NS_ENUM(NSInteger, AWSFirehoseAmazonOpenSearchServerlessS3BackupMode) {
    AWSFirehoseAmazonOpenSearchServerlessS3BackupModeUnknown,
    AWSFirehoseAmazonOpenSearchServerlessS3BackupModeFailedDocumentsOnly,
    AWSFirehoseAmazonOpenSearchServerlessS3BackupModeAllDocuments,
};

typedef NS_ENUM(NSInteger, AWSFirehoseAmazonopensearchserviceIndexRotationPeriod) {
    AWSFirehoseAmazonopensearchserviceIndexRotationPeriodUnknown,
    AWSFirehoseAmazonopensearchserviceIndexRotationPeriodNoRotation,
    AWSFirehoseAmazonopensearchserviceIndexRotationPeriodOneHour,
    AWSFirehoseAmazonopensearchserviceIndexRotationPeriodOneDay,
    AWSFirehoseAmazonopensearchserviceIndexRotationPeriodOneWeek,
    AWSFirehoseAmazonopensearchserviceIndexRotationPeriodOneMonth,
};

typedef NS_ENUM(NSInteger, AWSFirehoseAmazonopensearchserviceS3BackupMode) {
    AWSFirehoseAmazonopensearchserviceS3BackupModeUnknown,
    AWSFirehoseAmazonopensearchserviceS3BackupModeFailedDocumentsOnly,
    AWSFirehoseAmazonopensearchserviceS3BackupModeAllDocuments,
};

typedef NS_ENUM(NSInteger, AWSFirehoseCompressionFormat) {
    AWSFirehoseCompressionFormatUnknown,
    AWSFirehoseCompressionFormatUncompressed,
    AWSFirehoseCompressionFormatGzip,
    AWSFirehoseCompressionFormatZip,
    AWSFirehoseCompressionFormatSnappy,
    AWSFirehoseCompressionFormatHadoopSnappy,
};

typedef NS_ENUM(NSInteger, AWSFirehoseConnectivity) {
    AWSFirehoseConnectivityUnknown,
    AWSFirehoseConnectivityPublic,
    AWSFirehoseConnectivityPrivate,
};

typedef NS_ENUM(NSInteger, AWSFirehoseContentEncoding) {
    AWSFirehoseContentEncodingUnknown,
    AWSFirehoseContentEncodingNone,
    AWSFirehoseContentEncodingGzip,
};

typedef NS_ENUM(NSInteger, AWSFirehoseDefaultDocumentIdFormat) {
    AWSFirehoseDefaultDocumentIdFormatUnknown,
    AWSFirehoseDefaultDocumentIdFormatFirehoseDefault,
    AWSFirehoseDefaultDocumentIdFormatNoDocumentId,
};

typedef NS_ENUM(NSInteger, AWSFirehoseDeliveryStreamEncryptionStatus) {
    AWSFirehoseDeliveryStreamEncryptionStatusUnknown,
    AWSFirehoseDeliveryStreamEncryptionStatusEnabled,
    AWSFirehoseDeliveryStreamEncryptionStatusEnabling,
    AWSFirehoseDeliveryStreamEncryptionStatusEnablingFailed,
    AWSFirehoseDeliveryStreamEncryptionStatusDisabled,
    AWSFirehoseDeliveryStreamEncryptionStatusDisabling,
    AWSFirehoseDeliveryStreamEncryptionStatusDisablingFailed,
};

typedef NS_ENUM(NSInteger, AWSFirehoseDeliveryStreamFailureType) {
    AWSFirehoseDeliveryStreamFailureTypeUnknown,
    AWSFirehoseDeliveryStreamFailureTypeRetireKmsGrantFailed,
    AWSFirehoseDeliveryStreamFailureTypeCreateKmsGrantFailed,
    AWSFirehoseDeliveryStreamFailureTypeKmsAccessDenied,
    AWSFirehoseDeliveryStreamFailureTypeDisabledKmsKey,
    AWSFirehoseDeliveryStreamFailureTypeInvalidKmsKey,
    AWSFirehoseDeliveryStreamFailureTypeKmsKeyNotFound,
    AWSFirehoseDeliveryStreamFailureTypeKmsOptInRequired,
    AWSFirehoseDeliveryStreamFailureTypeCreateEniFailed,
    AWSFirehoseDeliveryStreamFailureTypeDeleteEniFailed,
    AWSFirehoseDeliveryStreamFailureTypeSubnetNotFound,
    AWSFirehoseDeliveryStreamFailureTypeSecurityGroupNotFound,
    AWSFirehoseDeliveryStreamFailureTypeEniAccessDenied,
    AWSFirehoseDeliveryStreamFailureTypeSubnetAccessDenied,
    AWSFirehoseDeliveryStreamFailureTypeSecurityGroupAccessDenied,
    AWSFirehoseDeliveryStreamFailureTypeUnknownError,
};

typedef NS_ENUM(NSInteger, AWSFirehoseDeliveryStreamStatus) {
    AWSFirehoseDeliveryStreamStatusUnknown,
    AWSFirehoseDeliveryStreamStatusCreating,
    AWSFirehoseDeliveryStreamStatusCreatingFailed,
    AWSFirehoseDeliveryStreamStatusDeleting,
    AWSFirehoseDeliveryStreamStatusDeletingFailed,
    AWSFirehoseDeliveryStreamStatusActive,
};

typedef NS_ENUM(NSInteger, AWSFirehoseDeliveryStreamType) {
    AWSFirehoseDeliveryStreamTypeUnknown,
    AWSFirehoseDeliveryStreamTypeDirectPut,
    AWSFirehoseDeliveryStreamTypeKinesisStreamAsSource,
    AWSFirehoseDeliveryStreamTypeMSKAsSource,
};

typedef NS_ENUM(NSInteger, AWSFirehoseElasticsearchIndexRotationPeriod) {
    AWSFirehoseElasticsearchIndexRotationPeriodUnknown,
    AWSFirehoseElasticsearchIndexRotationPeriodNoRotation,
    AWSFirehoseElasticsearchIndexRotationPeriodOneHour,
    AWSFirehoseElasticsearchIndexRotationPeriodOneDay,
    AWSFirehoseElasticsearchIndexRotationPeriodOneWeek,
    AWSFirehoseElasticsearchIndexRotationPeriodOneMonth,
};

typedef NS_ENUM(NSInteger, AWSFirehoseElasticsearchS3BackupMode) {
    AWSFirehoseElasticsearchS3BackupModeUnknown,
    AWSFirehoseElasticsearchS3BackupModeFailedDocumentsOnly,
    AWSFirehoseElasticsearchS3BackupModeAllDocuments,
};

typedef NS_ENUM(NSInteger, AWSFirehoseHECEndpointType) {
    AWSFirehoseHECEndpointTypeUnknown,
    AWSFirehoseHECEndpointTypeRaw,
    AWSFirehoseHECEndpointTypeEvent,
};

typedef NS_ENUM(NSInteger, AWSFirehoseHttpEndpointS3BackupMode) {
    AWSFirehoseHttpEndpointS3BackupModeUnknown,
    AWSFirehoseHttpEndpointS3BackupModeFailedDataOnly,
    AWSFirehoseHttpEndpointS3BackupModeAllData,
};

typedef NS_ENUM(NSInteger, AWSFirehoseKeyType) {
    AWSFirehoseKeyTypeUnknown,
    AWSFirehoseKeyTypeAwsOwnedCmk,
    AWSFirehoseKeyTypeCustomerManagedCmk,
};

typedef NS_ENUM(NSInteger, AWSFirehoseNoEncryptionConfig) {
    AWSFirehoseNoEncryptionConfigUnknown,
    AWSFirehoseNoEncryptionConfigNoEncryption,
};

typedef NS_ENUM(NSInteger, AWSFirehoseOrcCompression) {
    AWSFirehoseOrcCompressionUnknown,
    AWSFirehoseOrcCompressionNone,
    AWSFirehoseOrcCompressionZlib,
    AWSFirehoseOrcCompressionSnappy,
};

typedef NS_ENUM(NSInteger, AWSFirehoseOrcFormatVersion) {
    AWSFirehoseOrcFormatVersionUnknown,
    AWSFirehoseOrcFormatVersionV011,
    AWSFirehoseOrcFormatVersionV012,
};

typedef NS_ENUM(NSInteger, AWSFirehoseParquetCompression) {
    AWSFirehoseParquetCompressionUnknown,
    AWSFirehoseParquetCompressionUncompressed,
    AWSFirehoseParquetCompressionGzip,
    AWSFirehoseParquetCompressionSnappy,
};

typedef NS_ENUM(NSInteger, AWSFirehoseParquetWriterVersion) {
    AWSFirehoseParquetWriterVersionUnknown,
    AWSFirehoseParquetWriterVersionV1,
    AWSFirehoseParquetWriterVersionV2,
};

typedef NS_ENUM(NSInteger, AWSFirehoseProcessorParameterName) {
    AWSFirehoseProcessorParameterNameUnknown,
    AWSFirehoseProcessorParameterNameLambdaArn,
    AWSFirehoseProcessorParameterNameNumberOfRetries,
    AWSFirehoseProcessorParameterNameMetadataExtractionQuery,
    AWSFirehoseProcessorParameterNameJsonParsingEngine,
    AWSFirehoseProcessorParameterNameRoleArn,
    AWSFirehoseProcessorParameterNameBufferSizeInMBs,
    AWSFirehoseProcessorParameterNameBufferIntervalInSeconds,
    AWSFirehoseProcessorParameterNameSubRecordType,
    AWSFirehoseProcessorParameterNameDelimiter,
    AWSFirehoseProcessorParameterNameCompressionFormat,
};

typedef NS_ENUM(NSInteger, AWSFirehoseProcessorType) {
    AWSFirehoseProcessorTypeUnknown,
    AWSFirehoseProcessorTypeRecordDeAggregation,
    AWSFirehoseProcessorTypeDecompression,
    AWSFirehoseProcessorTypeLambda,
    AWSFirehoseProcessorTypeMetadataExtraction,
    AWSFirehoseProcessorTypeAppendDelimiterToRecord,
};

typedef NS_ENUM(NSInteger, AWSFirehoseRedshiftS3BackupMode) {
    AWSFirehoseRedshiftS3BackupModeUnknown,
    AWSFirehoseRedshiftS3BackupModeDisabled,
    AWSFirehoseRedshiftS3BackupModeEnabled,
};

typedef NS_ENUM(NSInteger, AWSFirehoseS3BackupMode) {
    AWSFirehoseS3BackupModeUnknown,
    AWSFirehoseS3BackupModeDisabled,
    AWSFirehoseS3BackupModeEnabled,
};

typedef NS_ENUM(NSInteger, AWSFirehoseSplunkS3BackupMode) {
    AWSFirehoseSplunkS3BackupModeUnknown,
    AWSFirehoseSplunkS3BackupModeFailedEventsOnly,
    AWSFirehoseSplunkS3BackupModeAllEvents,
};

@class AWSFirehoseAmazonOpenSearchServerlessBufferingHints;
@class AWSFirehoseAmazonOpenSearchServerlessDestinationConfiguration;
@class AWSFirehoseAmazonOpenSearchServerlessDestinationDescription;
@class AWSFirehoseAmazonOpenSearchServerlessDestinationUpdate;
@class AWSFirehoseAmazonOpenSearchServerlessRetryOptions;
@class AWSFirehoseAmazonopensearchserviceBufferingHints;
@class AWSFirehoseAmazonopensearchserviceDestinationConfiguration;
@class AWSFirehoseAmazonopensearchserviceDestinationDescription;
@class AWSFirehoseAmazonopensearchserviceDestinationUpdate;
@class AWSFirehoseAmazonopensearchserviceRetryOptions;
@class AWSFirehoseAuthenticationConfiguration;
@class AWSFirehoseBufferingHints;
@class AWSFirehoseCloudWatchLoggingOptions;
@class AWSFirehoseReplicateCommand;
@class AWSFirehoseCreateDeliveryStreamInput;
@class AWSFirehoseCreateDeliveryStreamOutput;
@class AWSFirehoseDataFormatConversionConfiguration;
@class AWSFirehoseDeleteDeliveryStreamInput;
@class AWSFirehoseDeleteDeliveryStreamOutput;
@class AWSFirehoseDeliveryStreamDescription;
@class AWSFirehoseDeliveryStreamEncryptionConfiguration;
@class AWSFirehoseDeliveryStreamEncryptionConfigurationInput;
@class AWSFirehoseDescribeDeliveryStreamInput;
@class AWSFirehoseDescribeDeliveryStreamOutput;
@class AWSFirehoseDeserializer;
@class AWSFirehoseDestinationDescription;
@class AWSFirehoseDocumentIdOptions;
@class AWSFirehoseDynamicPartitioningConfiguration;
@class AWSFirehoseElasticsearchBufferingHints;
@class AWSFirehoseElasticsearchDestinationConfiguration;
@class AWSFirehoseElasticsearchDestinationDescription;
@class AWSFirehoseElasticsearchDestinationUpdate;
@class AWSFirehoseElasticsearchRetryOptions;
@class AWSFirehoseEncryptionConfiguration;
@class AWSFirehoseExtendedS3DestinationConfiguration;
@class AWSFirehoseExtendedS3DestinationDescription;
@class AWSFirehoseExtendedS3DestinationUpdate;
@class AWSFirehoseFailureDescription;
@class AWSFirehoseHiveJsonSerDe;
@class AWSFirehoseHttpEndpointBufferingHints;
@class AWSFirehoseHttpEndpointCommonAttribute;
@class AWSFirehoseHttpEndpointConfiguration;
@class AWSFirehoseHttpEndpointDescription;
@class AWSFirehoseHttpEndpointDestinationConfiguration;
@class AWSFirehoseHttpEndpointDestinationDescription;
@class AWSFirehoseHttpEndpointDestinationUpdate;
@class AWSFirehoseHttpEndpointRequestConfiguration;
@class AWSFirehoseHttpEndpointRetryOptions;
@class AWSFirehoseInputFormatConfiguration;
@class AWSFirehoseKMSEncryptionConfig;
@class AWSFirehoseKinesisStreamSourceConfiguration;
@class AWSFirehoseKinesisStreamSourceDescription;
@class AWSFirehoseListDeliveryStreamsInput;
@class AWSFirehoseListDeliveryStreamsOutput;
@class AWSFirehoseListTagsForDeliveryStreamInput;
@class AWSFirehoseListTagsForDeliveryStreamOutput;
@class AWSFirehoseMSKSourceConfiguration;
@class AWSFirehoseMSKSourceDescription;
@class AWSFirehoseOpenXJsonSerDe;
@class AWSFirehoseOrcSerDe;
@class AWSFirehoseOutputFormatConfiguration;
@class AWSFirehoseParquetSerDe;
@class AWSFirehoseProcessingConfiguration;
@class AWSFirehoseProcessor;
@class AWSFirehoseProcessorParameter;
@class AWSFirehosePutRecordBatchInput;
@class AWSFirehosePutRecordBatchOutput;
@class AWSFirehosePutRecordBatchResponseEntry;
@class AWSFirehosePutRecordInput;
@class AWSFirehosePutRecordOutput;
@class AWSFirehoseRecord;
@class AWSFirehoseRedshiftDestinationConfiguration;
@class AWSFirehoseRedshiftDestinationDescription;
@class AWSFirehoseRedshiftDestinationUpdate;
@class AWSFirehoseRedshiftRetryOptions;
@class AWSFirehoseRetryOptions;
@class AWSFirehoseS3DestinationConfiguration;
@class AWSFirehoseS3DestinationDescription;
@class AWSFirehoseS3DestinationUpdate;
@class AWSFirehoseSchemaConfiguration;
@class AWSFirehoseSerializer;
@class AWSFirehoseSourceDescription;
@class AWSFirehoseSplunkBufferingHints;
@class AWSFirehoseSplunkDestinationConfiguration;
@class AWSFirehoseSplunkDestinationDescription;
@class AWSFirehoseSplunkDestinationUpdate;
@class AWSFirehoseSplunkRetryOptions;
@class AWSFirehoseStartDeliveryStreamEncryptionInput;
@class AWSFirehoseStartDeliveryStreamEncryptionOutput;
@class AWSFirehoseStopDeliveryStreamEncryptionInput;
@class AWSFirehoseStopDeliveryStreamEncryptionOutput;
@class AWSFirehoseTag;
@class AWSFirehoseTagDeliveryStreamInput;
@class AWSFirehoseTagDeliveryStreamOutput;
@class AWSFirehoseUntagDeliveryStreamInput;
@class AWSFirehoseUntagDeliveryStreamOutput;
@class AWSFirehoseUpdateDestinationInput;
@class AWSFirehoseUpdateDestinationOutput;
@class AWSFirehoseVpcConfiguration;
@class AWSFirehoseVpcConfigurationDescription;

/**
 <p>Describes the buffering to perform before delivering data to the Serverless offering for Amazon OpenSearch Service destination.</p>
 */
@interface AWSFirehoseAmazonOpenSearchServerlessBufferingHints : AWSModel


/**
 <p>Buffer incoming data for the specified period of time, in seconds, before delivering it to the destination. The default value is 300 (5 minutes).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable intervalInSeconds;

/**
 <p>Buffer incoming data to the specified size, in MBs, before delivering it to the destination. The default value is 5. </p><p>We recommend setting this parameter to a value greater than the amount of data you typically ingest into the delivery stream in 10 seconds. For example, if you typically ingest data at 1 MB/sec, the value should be 10 MB or higher.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sizeInMBs;

@end

/**
 <p>Describes the configuration of a destination in the Serverless offering for Amazon OpenSearch Service.</p>
 Required parameters: [RoleARN, IndexName, S3Configuration]
 */
@interface AWSFirehoseAmazonOpenSearchServerlessDestinationConfiguration : AWSModel


/**
 <p>The buffering options. If no value is specified, the default values for AmazonopensearchserviceBufferingHints are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the collection in the Serverless offering for Amazon OpenSearch Service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable collectionEndpoint;

/**
 <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to the Serverless offering for Amazon OpenSearch Service. The default value is 300 (5 minutes).</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data Firehose for calling the Serverless offering for Amazon OpenSearch Service Configuration API and for indexing documents.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Defines how documents should be delivered to Amazon S3. When it is set to FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not be indexed to the configured Amazon S3 destination, with AmazonOpenSearchService-failed/ appended to the key prefix. When set to AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3, and also writes failed documents with AmazonOpenSearchService-failed/ appended to the prefix.</p>
 */
@property (nonatomic, assign) AWSFirehoseAmazonOpenSearchServerlessS3BackupMode s3BackupMode;

/**
 <p>Describes the configuration of a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3Configuration;

/**
 <p>The details of the VPC of the Amazon OpenSearch or Amazon OpenSearch Serverless destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseVpcConfiguration * _Nullable vpcConfiguration;

@end

/**
 <p>The destination description in the Serverless offering for Amazon OpenSearch Service.</p>
 */
@interface AWSFirehoseAmazonOpenSearchServerlessDestinationDescription : AWSModel


/**
 <p>The buffering options.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the collection in the Serverless offering for Amazon OpenSearch Service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable collectionEndpoint;

/**
 <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The Amazon S3 backup mode.</p>
 */
@property (nonatomic, assign) AWSFirehoseAmazonOpenSearchServerlessS3BackupMode s3BackupMode;

/**
 <p>Describes a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3DestinationDescription;

/**
 <p>The details of the VPC of the Amazon ES destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseVpcConfigurationDescription * _Nullable vpcConfigurationDescription;

@end

/**
 <p>Describes an update for a destination in the Serverless offering for Amazon OpenSearch Service.</p>
 */
@interface AWSFirehoseAmazonOpenSearchServerlessDestinationUpdate : AWSModel


/**
 <p>The buffering options. If no value is specified, AmazonopensearchBufferingHints object default values are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the collection in the Serverless offering for Amazon OpenSearch Service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable collectionEndpoint;

/**
 <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to the Serverless offering for Amazon OpenSearch Service. The default value is 300 (5 minutes).</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data Firehose for calling the Serverless offering for Amazon OpenSearch Service Configuration API and for indexing documents.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Describes an update for a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3Update;

@end

/**
 <p>Configures retry behavior in case Kinesis Data Firehose is unable to deliver documents to the Serverless offering for Amazon OpenSearch Service.</p>
 */
@interface AWSFirehoseAmazonOpenSearchServerlessRetryOptions : AWSModel


/**
 <p>After an initial failure to deliver to the Serverless offering for Amazon OpenSearch Service, the total amount of time during which Kinesis Data Firehose retries delivery (including the first attempt). After this time has elapsed, the failed documents are written to Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results in no retries.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable durationInSeconds;

@end

/**
 <p>Describes the buffering to perform before delivering data to the Amazon OpenSearch Service destination. </p>
 */
@interface AWSFirehoseAmazonopensearchserviceBufferingHints : AWSModel


/**
 <p>Buffer incoming data for the specified period of time, in seconds, before delivering it to the destination. The default value is 300 (5 minutes). </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable intervalInSeconds;

/**
 <p>Buffer incoming data to the specified size, in MBs, before delivering it to the destination. The default value is 5.</p><p>We recommend setting this parameter to a value greater than the amount of data you typically ingest into the delivery stream in 10 seconds. For example, if you typically ingest data at 1 MB/sec, the value should be 10 MB or higher. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sizeInMBs;

@end

/**
 <p>Describes the configuration of a destination in Amazon OpenSearch Service</p>
 Required parameters: [RoleARN, IndexName, S3Configuration]
 */
@interface AWSFirehoseAmazonopensearchserviceDestinationConfiguration : AWSModel


/**
 <p>The buffering options. If no value is specified, the default values for AmazonopensearchserviceBufferingHints are used. </p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the cluster. Specify either this ClusterEndpoint or the DomainARN field. </p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterEndpoint;

/**
 <p>Indicates the method for setting up document ID. The supported methods are Kinesis Data Firehose generated document ID and OpenSearch Service generated document ID.</p>
 */
@property (nonatomic, strong) AWSFirehoseDocumentIdOptions * _Nullable documentIdOptions;

/**
 <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN. </p>
 */
@property (nonatomic, strong) NSString * _Nullable domainARN;

/**
 <p>The ElasticsearAmazon OpenSearch Service index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a timestamp to the IndexName to facilitate the expiration of old data.</p>
 */
@property (nonatomic, assign) AWSFirehoseAmazonopensearchserviceIndexRotationPeriod indexRotationPeriod;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon OpenSearch Service. The default value is 300 (5 minutes). </p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data Firehose for calling the Amazon OpenSearch Service Configuration API and for indexing documents.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Defines how documents should be delivered to Amazon S3. When it is set to FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not be indexed to the configured Amazon S3 destination, with AmazonOpenSearchService-failed/ appended to the key prefix. When set to AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3, and also writes failed documents with AmazonOpenSearchService-failed/ appended to the prefix. </p>
 */
@property (nonatomic, assign) AWSFirehoseAmazonopensearchserviceS3BackupMode s3BackupMode;

/**
 <p>Describes the configuration of a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3Configuration;

/**
 <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be only one type per index. If you try to specify a new type for an existing index that already has another type, Kinesis Data Firehose returns an error during run time. </p>
 */
@property (nonatomic, strong) NSString * _Nullable typeName;

/**
 <p>The details of the VPC of the Amazon OpenSearch or Amazon OpenSearch Serverless destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseVpcConfiguration * _Nullable vpcConfiguration;

@end

/**
 <p>The destination description in Amazon OpenSearch Service.</p>
 */
@interface AWSFirehoseAmazonopensearchserviceDestinationDescription : AWSModel


/**
 <p>The buffering options.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the cluster. Kinesis Data Firehose uses either this ClusterEndpoint or the DomainARN field to send data to Amazon OpenSearch Service. </p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterEndpoint;

/**
 <p>Indicates the method for setting up document ID. The supported methods are Kinesis Data Firehose generated document ID and OpenSearch Service generated document ID.</p>
 */
@property (nonatomic, strong) AWSFirehoseDocumentIdOptions * _Nullable documentIdOptions;

/**
 <p>The ARN of the Amazon OpenSearch Service domain.</p>
 */
@property (nonatomic, strong) NSString * _Nullable domainARN;

/**
 <p>The Amazon OpenSearch Service index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>The Amazon OpenSearch Service index rotation period</p>
 */
@property (nonatomic, assign) AWSFirehoseAmazonopensearchserviceIndexRotationPeriod indexRotationPeriod;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The Amazon OpenSearch Service retry options.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The Amazon S3 backup mode.</p>
 */
@property (nonatomic, assign) AWSFirehoseAmazonopensearchserviceS3BackupMode s3BackupMode;

/**
 <p>Describes a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3DestinationDescription;

/**
 <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no value for TypeName. </p>
 */
@property (nonatomic, strong) NSString * _Nullable typeName;

/**
 <p>The details of the VPC of the Amazon ES destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseVpcConfigurationDescription * _Nullable vpcConfigurationDescription;

@end

/**
 <p>Describes an update for a destination in Amazon OpenSearch Service.</p>
 */
@interface AWSFirehoseAmazonopensearchserviceDestinationUpdate : AWSModel


/**
 <p>The buffering options. If no value is specified, AmazonopensearchBufferingHints object default values are used. </p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the cluster. Specify either this ClusterEndpoint or the DomainARN field. </p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterEndpoint;

/**
 <p>Indicates the method for setting up document ID. The supported methods are Kinesis Data Firehose generated document ID and OpenSearch Service generated document ID.</p>
 */
@property (nonatomic, strong) AWSFirehoseDocumentIdOptions * _Nullable documentIdOptions;

/**
 <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have permissions for DescribeDomain, DescribeDomains, and DescribeDomainConfig after assuming the IAM role specified in RoleARN.</p>
 */
@property (nonatomic, strong) NSString * _Nullable domainARN;

/**
 <p>The Amazon OpenSearch Service index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a timestamp to IndexName to facilitate the expiration of old data.</p>
 */
@property (nonatomic, assign) AWSFirehoseAmazonopensearchserviceIndexRotationPeriod indexRotationPeriod;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon OpenSearch Service. The default value is 300 (5 minutes). </p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data Firehose for calling the Amazon OpenSearch Service Configuration API and for indexing documents. </p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Describes an update for a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3Update;

/**
 <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be only one type per index. If you try to specify a new type for an existing index that already has another type, Kinesis Data Firehose returns an error during runtime. </p><p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch with the old index name and type name. If you want to update your delivery stream with a new index name, provide an empty string for TypeName. </p>
 */
@property (nonatomic, strong) NSString * _Nullable typeName;

@end

/**
 <p>Configures retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon OpenSearch Service. </p>
 */
@interface AWSFirehoseAmazonopensearchserviceRetryOptions : AWSModel


/**
 <p>After an initial failure to deliver to Amazon OpenSearch Service, the total amount of time during which Kinesis Data Firehose retries delivery (including the first attempt). After this time has elapsed, the failed documents are written to Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results in no retries. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable durationInSeconds;

@end

/**
 <p>The authentication configuration of the Amazon MSK cluster.</p>
 Required parameters: [RoleARN, Connectivity]
 */
@interface AWSFirehoseAuthenticationConfiguration : AWSModel


/**
 <p>The type of connectivity used to access the Amazon MSK cluster.</p>
 */
@property (nonatomic, assign) AWSFirehoseConnectivity connectivity;

/**
 <p>The ARN of the role used to access the Amazon MSK cluster.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 <p>Describes hints for the buffering to perform before delivering data to the destination. These options are treated as hints, and therefore Kinesis Data Firehose might choose to use different values when it is optimal. The <code>SizeInMBs</code> and <code>IntervalInSeconds</code> parameters are optional. However, if specify a value for one of them, you must also provide a value for the other.</p>
 */
@interface AWSFirehoseBufferingHints : AWSModel


/**
 <p>Buffer incoming data for the specified period of time, in seconds, before delivering it to the destination. The default value is 300. This parameter is optional but if you specify a value for it, you must also specify a value for <code>SizeInMBs</code>, and vice versa.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable intervalInSeconds;

/**
 <p>Buffer incoming data to the specified size, in MiBs, before delivering it to the destination. The default value is 5. This parameter is optional but if you specify a value for it, you must also specify a value for <code>IntervalInSeconds</code>, and vice versa.</p><p>We recommend setting this parameter to a value greater than the amount of data you typically ingest into the delivery stream in 10 seconds. For example, if you typically ingest data at 1 MiB/sec, the value should be 10 MiB or higher.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sizeInMBs;

@end

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@interface AWSFirehoseCloudWatchLoggingOptions : AWSModel


/**
 <p>Enables or disables CloudWatch logging.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>The CloudWatch group name for logging. This value is required if CloudWatch logging is enabled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable logGroupName;

/**
 <p>The CloudWatch log stream name for logging. This value is required if CloudWatch logging is enabled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable logStreamName;

@end

/**
 <p>Describes a <code>COPY</code> command for Amazon Redshift.</p>
 Required parameters: [DataTableName]
 */
@interface AWSFirehoseReplicateCommand : AWSModel


/**
 <p>Optional parameters to use with the Amazon Redshift <code>COPY</code> command. For more information, see the "Optional Parameters" section of <a href="https://docs.aws.amazon.com/redshift/latest/dg/r_COPY.html">Amazon Redshift COPY command</a>. Some possible examples that would apply to Kinesis Data Firehose are as follows:</p><p><code>delimiter '\t' lzop;</code> - fields are delimited with "\t" (TAB character) and compressed using lzop.</p><p><code>delimiter '|'</code> - fields are delimited with "|" (this is the default delimiter).</p><p><code>delimiter '|' escape</code> - the delimiter should be escaped.</p><p><code>fixedwidth 'venueid:3,venuename:25,venuecity:12,venuestate:2,venueseats:6'</code> - fields are fixed width in the source, with each width specified after every column in the table.</p><p><code>JSON 's3://mybucket/jsonpaths.txt'</code> - data is in JSON format, and the path specified is the format of the data.</p><p>For more examples, see <a href="https://docs.aws.amazon.com/redshift/latest/dg/r_COPY_command_examples.html">Amazon Redshift COPY command examples</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable replicateOptions;

/**
 <p>A comma-separated list of column names.</p>
 */
@property (nonatomic, strong) NSString * _Nullable dataTableColumns;

/**
 <p>The name of the target table. The table must already exist in the database.</p>
 */
@property (nonatomic, strong) NSString * _Nullable dataTableName;

@end

/**
 
 */
@interface AWSFirehoseCreateDeliveryStreamInput : AWSRequest


/**
 <p>The destination in the Serverless offering for Amazon OpenSearch Service. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessDestinationConfiguration * _Nullable amazonOpenSearchServerlessDestinationConfiguration;

/**
 <p>The destination in Amazon OpenSearch Service. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceDestinationConfiguration * _Nullable amazonopensearchserviceDestinationConfiguration;

/**
 <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed for Server-Side Encryption (SSE).</p>
 */
@property (nonatomic, strong) AWSFirehoseDeliveryStreamEncryptionConfigurationInput * _Nullable deliveryStreamEncryptionConfigurationInput;

/**
 <p>The name of the delivery stream. This name must be unique per Amazon Web Services account in the same Amazon Web Services Region. If the delivery streams are in different accounts or different Regions, you can have multiple delivery streams with the same name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>The delivery stream type. This parameter can be one of the following values:</p><ul><li><p><code>DirectPut</code>: Provider applications access the delivery stream directly.</p></li><li><p><code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data stream as a source.</p></li></ul>
 */
@property (nonatomic, assign) AWSFirehoseDeliveryStreamType deliveryStreamType;

/**
 <p>The destination in Amazon ES. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchDestinationConfiguration * _Nullable elasticsearchDestinationConfiguration;

/**
 <p>The destination in Amazon S3. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseExtendedS3DestinationConfiguration * _Nullable extendedS3DestinationConfiguration;

/**
 <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint destination. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointDestinationConfiguration * _Nullable httpEndpointDestinationConfiguration;

/**
 <p>When a Kinesis data stream is used as the source for the delivery stream, a <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseKinesisStreamSourceConfiguration * _Nullable kinesisStreamSourceConfiguration;

/**
 <p>The configuration for the Amazon MSK cluster to be used as the source for a delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseMSKSourceConfiguration * _Nullable MSKSourceConfiguration;

/**
 <p>The destination in Amazon Redshift. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseRedshiftDestinationConfiguration * _Nullable redshiftDestinationConfiguration;

/**
 <p>[Deprecated] The destination in Amazon S3. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3DestinationConfiguration;

/**
 <p>The destination in Splunk. You can specify only one destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkDestinationConfiguration * _Nullable splunkDestinationConfiguration;

/**
 <p>A set of tags to assign to the delivery stream. A tag is a key-value pair that you can define and assign to Amazon Web Services resources. Tags are metadata. For example, you can add friendly names and descriptions or other types of information that can help you distinguish the delivery stream. For more information about tags, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management User Guide.</p><p>You can specify up to 50 tags when creating a delivery stream.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseTag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSFirehoseCreateDeliveryStreamOutput : AWSModel


/**
 <p>The ARN of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamARN;

@end

/**
 <p>Specifies that you want Kinesis Data Firehose to convert data from the JSON format to the Parquet or ORC format before writing it to Amazon S3. Kinesis Data Firehose uses the serializer and deserializer that you specify, in addition to the column information from the Amazon Web Services Glue table, to deserialize your input data from JSON and then serialize it to the Parquet or ORC format. For more information, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/record-format-conversion.html">Kinesis Data Firehose Record Format Conversion</a>.</p>
 */
@interface AWSFirehoseDataFormatConversionConfiguration : AWSModel


/**
 <p>Defaults to <code>true</code>. Set it to <code>false</code> if you want to disable format conversion while preserving the configuration details.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>Specifies the deserializer that you want Kinesis Data Firehose to use to convert the format of your data from JSON. This parameter is required if <code>Enabled</code> is set to true.</p>
 */
@property (nonatomic, strong) AWSFirehoseInputFormatConfiguration * _Nullable inputFormatConfiguration;

/**
 <p>Specifies the serializer that you want Kinesis Data Firehose to use to convert the format of your data to the Parquet or ORC format. This parameter is required if <code>Enabled</code> is set to true.</p>
 */
@property (nonatomic, strong) AWSFirehoseOutputFormatConfiguration * _Nullable outputFormatConfiguration;

/**
 <p>Specifies the Amazon Web Services Glue Data Catalog table that contains the column information. This parameter is required if <code>Enabled</code> is set to true.</p>
 */
@property (nonatomic, strong) AWSFirehoseSchemaConfiguration * _Nullable schemaConfiguration;

@end

/**
 
 */
@interface AWSFirehoseDeleteDeliveryStreamInput : AWSRequest


/**
 <p>Set this to true if you want to delete the delivery stream even if Kinesis Data Firehose is unable to retire the grant for the CMK. Kinesis Data Firehose might be unable to retire the grant due to a customer error, such as when the CMK or the grant are in an invalid state. If you force deletion, you can then use the <a href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a> operation to revoke the grant you gave to Kinesis Data Firehose. If a failure to retire the grant happens due to an Amazon Web Services KMS issue, Kinesis Data Firehose keeps retrying the delete operation.</p><p>The default value is false.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowForceDelete;

/**
 <p>The name of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

@end

/**
 
 */
@interface AWSFirehoseDeleteDeliveryStreamOutput : AWSModel


@end

/**
 <p>Contains information about a delivery stream.</p>
 Required parameters: [DeliveryStreamName, DeliveryStreamARN, DeliveryStreamStatus, DeliveryStreamType, VersionId, Destinations, HasMoreDestinations]
 */
@interface AWSFirehoseDeliveryStreamDescription : AWSModel


/**
 <p>The date and time that the delivery stream was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTimestamp;

/**
 <p>The Amazon Resource Name (ARN) of the delivery stream. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamARN;

/**
 <p>Indicates the server-side encryption (SSE) status for the delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseDeliveryStreamEncryptionConfiguration * _Nullable deliveryStreamEncryptionConfiguration;

/**
 <p>The name of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>The status of the delivery stream. If the status of a delivery stream is <code>CREATING_FAILED</code>, this status doesn't change, and you can't invoke <code>CreateDeliveryStream</code> again on it. However, you can invoke the <a>DeleteDeliveryStream</a> operation to delete it.</p>
 */
@property (nonatomic, assign) AWSFirehoseDeliveryStreamStatus deliveryStreamStatus;

/**
 <p>The delivery stream type. This can be one of the following values:</p><ul><li><p><code>DirectPut</code>: Provider applications access the delivery stream directly.</p></li><li><p><code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data stream as a source.</p></li></ul>
 */
@property (nonatomic, assign) AWSFirehoseDeliveryStreamType deliveryStreamType;

/**
 <p>The destinations.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseDestinationDescription *> * _Nullable destinations;

/**
 <p>Provides details in case one of the following operations fails due to an error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>, <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
 */
@property (nonatomic, strong) AWSFirehoseFailureDescription * _Nullable failureDescription;

/**
 <p>Indicates whether there are more destinations available to list.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable hasMoreDestinations;

/**
 <p>The date and time that the delivery stream was last updated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable lastUpdateTimestamp;

/**
 <p>If the <code>DeliveryStreamType</code> parameter is <code>KinesisStreamAsSource</code>, a <a>SourceDescription</a> object describing the source Kinesis data stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseSourceDescription * _Nullable source;

/**
 <p>Each time the destination is updated for a delivery stream, the version ID is changed, and the current version ID is required when updating the destination. This is so that the service knows it is applying the changes to the correct version of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable versionId;

@end

/**
 <p>Contains information about the server-side encryption (SSE) status for the delivery stream, the type customer master key (CMK) in use, if any, and the ARN of the CMK. You can get <code>DeliveryStreamEncryptionConfiguration</code> by invoking the <a>DescribeDeliveryStream</a> operation. </p>
 */
@interface AWSFirehoseDeliveryStreamEncryptionConfiguration : AWSModel


/**
 <p>Provides details in case one of the following operations fails due to an error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>, <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
 */
@property (nonatomic, strong) AWSFirehoseFailureDescription * _Nullable failureDescription;

/**
 <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field contains the ARN of the customer managed CMK. If <code>KeyType</code> is <code>Amazon Web Services_OWNED_CMK</code>, <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for <code>KeyARN</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyARN;

/**
 <p>Indicates the type of customer master key (CMK) that is used for encryption. The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more information about CMKs, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer Master Keys (CMKs)</a>.</p>
 */
@property (nonatomic, assign) AWSFirehoseKeyType keyType;

/**
 <p>This is the server-side encryption (SSE) status for the delivery stream. For a full description of the different values of this status, see <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it is the status of the most recent attempt to enable or disable SSE, respectively.</p>
 */
@property (nonatomic, assign) AWSFirehoseDeliveryStreamEncryptionStatus status;

@end

/**
 <p>Specifies the type and Amazon Resource Name (ARN) of the CMK to use for Server-Side Encryption (SSE). </p>
 Required parameters: [KeyType]
 */
@interface AWSFirehoseDeliveryStreamEncryptionConfigurationInput : AWSModel


/**
 <p>If you set <code>KeyType</code> to <code>CUSTOMER_MANAGED_CMK</code>, you must specify the Amazon Resource Name (ARN) of the CMK. If you set <code>KeyType</code> to <code>Amazon Web Services_OWNED_CMK</code>, Kinesis Data Firehose uses a service-account CMK.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyARN;

/**
 <p>Indicates the type of customer master key (CMK) to use for encryption. The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more information about CMKs, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer Master Keys (CMKs)</a>. When you invoke <a>CreateDeliveryStream</a> or <a>StartDeliveryStreamEncryption</a> with <code>KeyType</code> set to CUSTOMER_MANAGED_CMK, Kinesis Data Firehose invokes the Amazon KMS operation <a href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a> to create a grant that allows the Kinesis Data Firehose service to use the customer managed CMK to perform encryption and decryption. Kinesis Data Firehose manages that grant. </p><p>When you invoke <a>StartDeliveryStreamEncryption</a> to change the CMK for a delivery stream that is encrypted with a customer managed CMK, Kinesis Data Firehose schedules the grant it had on the old CMK for retirement.</p><p>You can use a CMK of type CUSTOMER_MANAGED_CMK to encrypt up to 500 delivery streams. If a <a>CreateDeliveryStream</a> or <a>StartDeliveryStreamEncryption</a> operation exceeds this limit, Kinesis Data Firehose throws a <code>LimitExceededException</code>. </p><important><p>To encrypt your delivery stream, use symmetric CMKs. Kinesis Data Firehose doesn't support asymmetric CMKs. For information about symmetric and asymmetric CMKs, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html">About Symmetric and Asymmetric CMKs</a> in the Amazon Web Services Key Management Service developer guide.</p></important>
 */
@property (nonatomic, assign) AWSFirehoseKeyType keyType;

@end

/**
 
 */
@interface AWSFirehoseDescribeDeliveryStreamInput : AWSRequest


/**
 <p>The name of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>The ID of the destination to start returning the destination information. Kinesis Data Firehose supports one destination per delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable exclusiveStartDestinationId;

/**
 <p>The limit on the number of destinations to return. You can have one destination per delivery stream.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

@end

/**
 
 */
@interface AWSFirehoseDescribeDeliveryStreamOutput : AWSModel


/**
 <p>Information about the delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseDeliveryStreamDescription * _Nullable deliveryStreamDescription;

@end

/**
 <p>The deserializer you want Kinesis Data Firehose to use for converting the input data from JSON. Kinesis Data Firehose then serializes the data to its final format using the <a>Serializer</a>. Kinesis Data Firehose supports two types of deserializers: the <a href="https://cwiki.apache.org/confluence/display/Hive/LanguageManual+DDL#LanguageManualDDL-JSON">Apache Hive JSON SerDe</a> and the <a href="https://github.com/rcongiu/Hive-JSON-Serde">OpenX JSON SerDe</a>.</p>
 */
@interface AWSFirehoseDeserializer : AWSModel


/**
 <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for deserializing data, which means converting it from the JSON format in preparation for serializing it to the Parquet or ORC format. This is one of two deserializers you can choose, depending on which one offers the functionality you need. The other option is the OpenX SerDe.</p>
 */
@property (nonatomic, strong) AWSFirehoseHiveJsonSerDe * _Nullable hiveJsonSerDe;

/**
 <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which means converting it from the JSON format in preparation for serializing it to the Parquet or ORC format. This is one of two deserializers you can choose, depending on which one offers the functionality you need. The other option is the native Hive / HCatalog JsonSerDe.</p>
 */
@property (nonatomic, strong) AWSFirehoseOpenXJsonSerDe * _Nullable openXJsonSerDe;

@end

/**
 <p>Describes the destination for a delivery stream.</p>
 Required parameters: [DestinationId]
 */
@interface AWSFirehoseDestinationDescription : AWSModel


/**
 <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessDestinationDescription * _Nullable amazonOpenSearchServerlessDestinationDescription;

/**
 <p>The destination in Amazon OpenSearch Service.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceDestinationDescription * _Nullable amazonopensearchserviceDestinationDescription;

/**
 <p>The ID of the destination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationId;

/**
 <p>The destination in Amazon ES.</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchDestinationDescription * _Nullable elasticsearchDestinationDescription;

/**
 <p>The destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseExtendedS3DestinationDescription * _Nullable extendedS3DestinationDescription;

/**
 <p>Describes the specified HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointDestinationDescription * _Nullable httpEndpointDestinationDescription;

/**
 <p>The destination in Amazon Redshift.</p>
 */
@property (nonatomic, strong) AWSFirehoseRedshiftDestinationDescription * _Nullable redshiftDestinationDescription;

/**
 <p>[Deprecated] The destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3DestinationDescription;

/**
 <p>The destination in Splunk.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkDestinationDescription * _Nullable splunkDestinationDescription;

@end

/**
 <p>Indicates the method for setting up document ID. The supported methods are Kinesis Data Firehose generated document ID and OpenSearch Service generated document ID.</p><p/>
 Required parameters: [DefaultDocumentIdFormat]
 */
@interface AWSFirehoseDocumentIdOptions : AWSModel


/**
 <p>When the <code>FIREHOSE_DEFAULT</code> option is chosen, Kinesis Data Firehose generates a unique document ID for each record based on a unique internal identifier. The generated document ID is stable across multiple delivery attempts, which helps prevent the same record from being indexed multiple times with different document IDs.</p><p>When the <code>NO_DOCUMENT_ID</code> option is chosen, Kinesis Data Firehose does not include any document IDs in the requests it sends to the Amazon OpenSearch Service. This causes the Amazon OpenSearch Service domain to generate document IDs. In case of multiple delivery attempts, this may cause the same record to be indexed more than once with different document IDs. This option enables write-heavy operations, such as the ingestion of logs and observability data, to consume less resources in the Amazon OpenSearch Service domain, resulting in improved performance.</p>
 */
@property (nonatomic, assign) AWSFirehoseDefaultDocumentIdFormat defaultDocumentIdFormat;

@end

/**
 <p>The configuration of the dynamic partitioning mechanism that creates smaller data sets from the streaming data by partitioning it based on partition keys. Currently, dynamic partitioning is only supported for Amazon S3 destinations. </p>
 */
@interface AWSFirehoseDynamicPartitioningConfiguration : AWSModel


/**
 <p>Specifies that the dynamic partitioning is enabled for this Kinesis Data Firehose delivery stream.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to an Amazon S3 prefix.</p>
 */
@property (nonatomic, strong) AWSFirehoseRetryOptions * _Nullable retryOptions;

@end

/**
 <p>Describes the buffering to perform before delivering data to the Amazon ES destination.</p>
 */
@interface AWSFirehoseElasticsearchBufferingHints : AWSModel


/**
 <p>Buffer incoming data for the specified period of time, in seconds, before delivering it to the destination. The default value is 300 (5 minutes).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable intervalInSeconds;

/**
 <p>Buffer incoming data to the specified size, in MBs, before delivering it to the destination. The default value is 5.</p><p>We recommend setting this parameter to a value greater than the amount of data you typically ingest into the delivery stream in 10 seconds. For example, if you typically ingest data at 1 MB/sec, the value should be 10 MB or higher.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sizeInMBs;

@end

/**
 <p>Describes the configuration of a destination in Amazon ES.</p>
 Required parameters: [RoleARN, IndexName, S3Configuration]
 */
@interface AWSFirehoseElasticsearchDestinationConfiguration : AWSModel


/**
 <p>The buffering options. If no value is specified, the default values for <code>ElasticsearchBufferingHints</code> are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the cluster. Specify either this <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterEndpoint;

/**
 <p>Indicates the method for setting up document ID. The supported methods are Kinesis Data Firehose generated document ID and OpenSearch Service generated document ID.</p>
 */
@property (nonatomic, strong) AWSFirehoseDocumentIdOptions * _Nullable documentIdOptions;

/**
 <p>The ARN of the Amazon ES domain. The IAM role must have permissions for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and <code>DescribeDomainConfig</code> after assuming the role specified in <b>RoleARN</b>. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p><p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable domainARN;

/**
 <p>The Elasticsearch index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>The Elasticsearch index rotation period. Index rotation appends a timestamp to the <code>IndexName</code> to facilitate the expiration of old data. For more information, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index Rotation for the Amazon ES Destination</a>. The default value is <code>OneDay</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseElasticsearchIndexRotationPeriod indexRotationPeriod;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon ES. The default value is 300 (5 minutes).</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data Firehose for calling the Amazon ES Configuration API and for indexing documents. For more information, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Defines how documents should be delivered to Amazon S3. When it is set to <code>FailedDocumentsOnly</code>, Kinesis Data Firehose writes any documents that could not be indexed to the configured Amazon S3 destination, with <code>AmazonOpenSearchService-failed/</code> appended to the key prefix. When set to <code>AllDocuments</code>, Kinesis Data Firehose delivers all incoming records to Amazon S3, and also writes failed documents with <code>AmazonOpenSearchService-failed/</code> appended to the prefix. For more information, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-s3-backup">Amazon S3 Backup for the Amazon ES Destination</a>. Default value is <code>FailedDocumentsOnly</code>.</p><p>You can't change this backup mode after you create the delivery stream. </p>
 */
@property (nonatomic, assign) AWSFirehoseElasticsearchS3BackupMode s3BackupMode;

/**
 <p>The configuration for the backup Amazon S3 location.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3Configuration;

/**
 <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one type per index. If you try to specify a new type for an existing index that already has another type, Kinesis Data Firehose returns an error during run time.</p><p>For Elasticsearch 7.x, don't specify a <code>TypeName</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable typeName;

/**
 <p>The details of the VPC of the Amazon destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseVpcConfiguration * _Nullable vpcConfiguration;

@end

/**
 <p>The destination description in Amazon ES.</p>
 */
@interface AWSFirehoseElasticsearchDestinationDescription : AWSModel


/**
 <p>The buffering options.</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the cluster. Kinesis Data Firehose uses either this <code>ClusterEndpoint</code> or the <code>DomainARN</code> field to send data to Amazon ES.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterEndpoint;

/**
 <p>Indicates the method for setting up document ID. The supported methods are Kinesis Data Firehose generated document ID and OpenSearch Service generated document ID.</p>
 */
@property (nonatomic, strong) AWSFirehoseDocumentIdOptions * _Nullable documentIdOptions;

/**
 <p>The ARN of the Amazon ES domain. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p><p>Kinesis Data Firehose uses either <code>ClusterEndpoint</code> or <code>DomainARN</code> to send data to Amazon ES.</p>
 */
@property (nonatomic, strong) NSString * _Nullable domainARN;

/**
 <p>The Elasticsearch index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>The Elasticsearch index rotation period</p>
 */
@property (nonatomic, assign) AWSFirehoseElasticsearchIndexRotationPeriod indexRotationPeriod;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The Amazon ES retry options.</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The Amazon S3 backup mode.</p>
 */
@property (nonatomic, assign) AWSFirehoseElasticsearchS3BackupMode s3BackupMode;

/**
 <p>The Amazon S3 destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3DestinationDescription;

/**
 <p>The Elasticsearch type name. This applies to Elasticsearch 6.x and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no value for <code>TypeName</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable typeName;

/**
 <p>The details of the VPC of the Amazon OpenSearch or the Amazon OpenSearch Serverless destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseVpcConfigurationDescription * _Nullable vpcConfigurationDescription;

@end

/**
 <p>Describes an update for a destination in Amazon ES.</p>
 */
@interface AWSFirehoseElasticsearchDestinationUpdate : AWSModel


/**
 <p>The buffering options. If no value is specified, <code>ElasticsearchBufferingHints</code> object default values are used. </p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchBufferingHints * _Nullable bufferingHints;

/**
 <p>The CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The endpoint to use when communicating with the cluster. Specify either this <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterEndpoint;

/**
 <p>Indicates the method for setting up document ID. The supported methods are Kinesis Data Firehose generated document ID and OpenSearch Service generated document ID.</p>
 */
@property (nonatomic, strong) AWSFirehoseDocumentIdOptions * _Nullable documentIdOptions;

/**
 <p>The ARN of the Amazon ES domain. The IAM role must have permissions for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and <code>DescribeDomainConfig</code> after assuming the IAM role specified in <code>RoleARN</code>. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p><p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable domainARN;

/**
 <p>The Elasticsearch index name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable indexName;

/**
 <p>The Elasticsearch index rotation period. Index rotation appends a timestamp to <code>IndexName</code> to facilitate the expiration of old data. For more information, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index Rotation for the Amazon ES Destination</a>. Default value is <code>OneDay</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseElasticsearchIndexRotationPeriod indexRotationPeriod;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon ES. The default value is 300 (5 minutes).</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data Firehose for calling the Amazon ES Configuration API and for indexing documents. For more information, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The Amazon S3 destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3Update;

/**
 <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one type per index. If you try to specify a new type for an existing index that already has another type, Kinesis Data Firehose returns an error during runtime.</p><p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch with the old index name and type name. If you want to update your delivery stream with a new index name, provide an empty string for <code>TypeName</code>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable typeName;

@end

/**
 <p>Configures retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon ES.</p>
 */
@interface AWSFirehoseElasticsearchRetryOptions : AWSModel


/**
 <p>After an initial failure to deliver to Amazon ES, the total amount of time during which Kinesis Data Firehose retries delivery (including the first attempt). After this time has elapsed, the failed documents are written to Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results in no retries.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable durationInSeconds;

@end

/**
 <p>Describes the encryption for a destination in Amazon S3.</p>
 */
@interface AWSFirehoseEncryptionConfiguration : AWSModel


/**
 <p>The encryption key.</p>
 */
@property (nonatomic, strong) AWSFirehoseKMSEncryptionConfig * _Nullable KMSEncryptionConfig;

/**
 <p>Specifically override existing encryption information to ensure that no encryption is used.</p>
 */
@property (nonatomic, assign) AWSFirehoseNoEncryptionConfig noEncryptionConfig;

@end

/**
 <p>Describes the configuration of a destination in Amazon S3.</p>
 Required parameters: [RoleARN, BucketARN]
 */
@interface AWSFirehoseExtendedS3DestinationConfiguration : AWSModel


/**
 <p>The ARN of the S3 bucket. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucketARN;

/**
 <p>The buffering option.</p>
 */
@property (nonatomic, strong) AWSFirehoseBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The compression format. If no value is specified, the default is UNCOMPRESSED.</p>
 */
@property (nonatomic, assign) AWSFirehoseCompressionFormat compressionFormat;

/**
 <p>The serializer, deserializer, and schema for converting data from the JSON format to the Parquet or ORC format before writing it to Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseDataFormatConversionConfiguration * _Nullable dataFormatConversionConfiguration;

/**
 <p>The configuration of the dynamic partitioning mechanism that creates smaller data sets from the streaming data by partitioning it based on partition keys. Currently, dynamic partitioning is only supported for Amazon S3 destinations. </p>
 */
@property (nonatomic, strong) AWSFirehoseDynamicPartitioningConfiguration * _Nullable dynamicPartitioningConfiguration;

/**
 <p>The encryption configuration. If no value is specified, the default is no encryption.</p>
 */
@property (nonatomic, strong) AWSFirehoseEncryptionConfiguration * _Nullable encryptionConfiguration;

/**
 <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records before writing them to S3. This prefix appears immediately following the bucket name. For information about how to specify this prefix, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorOutputPrefix;

/**
 <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered Amazon S3 files. You can also specify a custom prefix, as described in <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The configuration for backup in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3BackupConfiguration;

/**
 <p>The Amazon S3 backup mode. After you create a delivery stream, you can update it to enable Amazon S3 backup if it is disabled. If backup is enabled, you can't update the delivery stream to disable it. </p>
 */
@property (nonatomic, assign) AWSFirehoseS3BackupMode s3BackupMode;

@end

/**
 <p>Describes a destination in Amazon S3.</p>
 Required parameters: [RoleARN, BucketARN, BufferingHints, CompressionFormat, EncryptionConfiguration]
 */
@interface AWSFirehoseExtendedS3DestinationDescription : AWSModel


/**
 <p>The ARN of the S3 bucket. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucketARN;

/**
 <p>The buffering option.</p>
 */
@property (nonatomic, strong) AWSFirehoseBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The compression format. If no value is specified, the default is <code>UNCOMPRESSED</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseCompressionFormat compressionFormat;

/**
 <p>The serializer, deserializer, and schema for converting data from the JSON format to the Parquet or ORC format before writing it to Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseDataFormatConversionConfiguration * _Nullable dataFormatConversionConfiguration;

/**
 <p>The configuration of the dynamic partitioning mechanism that creates smaller data sets from the streaming data by partitioning it based on partition keys. Currently, dynamic partitioning is only supported for Amazon S3 destinations. </p>
 */
@property (nonatomic, strong) AWSFirehoseDynamicPartitioningConfiguration * _Nullable dynamicPartitioningConfiguration;

/**
 <p>The encryption configuration. If no value is specified, the default is no encryption.</p>
 */
@property (nonatomic, strong) AWSFirehoseEncryptionConfiguration * _Nullable encryptionConfiguration;

/**
 <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records before writing them to S3. This prefix appears immediately following the bucket name. For information about how to specify this prefix, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorOutputPrefix;

/**
 <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered Amazon S3 files. You can also specify a custom prefix, as described in <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The configuration for backup in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3BackupDescription;

/**
 <p>The Amazon S3 backup mode.</p>
 */
@property (nonatomic, assign) AWSFirehoseS3BackupMode s3BackupMode;

@end

/**
 <p>Describes an update for a destination in Amazon S3.</p>
 */
@interface AWSFirehoseExtendedS3DestinationUpdate : AWSModel


/**
 <p>The ARN of the S3 bucket. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucketARN;

/**
 <p>The buffering option.</p>
 */
@property (nonatomic, strong) AWSFirehoseBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The compression format. If no value is specified, the default is <code>UNCOMPRESSED</code>. </p>
 */
@property (nonatomic, assign) AWSFirehoseCompressionFormat compressionFormat;

/**
 <p>The serializer, deserializer, and schema for converting data from the JSON format to the Parquet or ORC format before writing it to Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseDataFormatConversionConfiguration * _Nullable dataFormatConversionConfiguration;

/**
 <p>The configuration of the dynamic partitioning mechanism that creates smaller data sets from the streaming data by partitioning it based on partition keys. Currently, dynamic partitioning is only supported for Amazon S3 destinations. </p>
 */
@property (nonatomic, strong) AWSFirehoseDynamicPartitioningConfiguration * _Nullable dynamicPartitioningConfiguration;

/**
 <p>The encryption configuration. If no value is specified, the default is no encryption.</p>
 */
@property (nonatomic, strong) AWSFirehoseEncryptionConfiguration * _Nullable encryptionConfiguration;

/**
 <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records before writing them to S3. This prefix appears immediately following the bucket name. For information about how to specify this prefix, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorOutputPrefix;

/**
 <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered Amazon S3 files. You can also specify a custom prefix, as described in <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>You can update a delivery stream to enable Amazon S3 backup if it is disabled. If backup is enabled, you can't update the delivery stream to disable it. </p>
 */
@property (nonatomic, assign) AWSFirehoseS3BackupMode s3BackupMode;

/**
 <p>The Amazon S3 destination for backup.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3BackupUpdate;

@end

/**
 <p>Provides details in case one of the following operations fails due to an error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>, <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
 Required parameters: [Type, Details]
 */
@interface AWSFirehoseFailureDescription : AWSModel


/**
 <p>A message providing details about the error that caused the failure.</p>
 */
@property (nonatomic, strong) NSString * _Nullable details;

/**
 <p>The type of error that caused the failure.</p>
 */
@property (nonatomic, assign) AWSFirehoseDeliveryStreamFailureType types;

@end

/**
 <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for deserializing data, which means converting it from the JSON format in preparation for serializing it to the Parquet or ORC format. This is one of two deserializers you can choose, depending on which one offers the functionality you need. The other option is the OpenX SerDe.</p>
 */
@interface AWSFirehoseHiveJsonSerDe : AWSModel


/**
 <p>Indicates how you want Kinesis Data Firehose to parse the date and timestamps that may be present in your input data JSON. To specify these format strings, follow the pattern syntax of JodaTime's DateTimeFormat format strings. For more information, see <a href="https://www.joda.org/joda-time/apidocs/org/joda/time/format/DateTimeFormat.html">Class DateTimeFormat</a>. You can also use the special value <code>millis</code> to parse timestamps in epoch milliseconds. If you don't specify a format, Kinesis Data Firehose uses <code>java.sql.Timestamp::valueOf</code> by default.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable timestampFormats;

@end

/**
 <p>Describes the buffering options that can be applied before data is delivered to the HTTP endpoint destination. Kinesis Data Firehose treats these options as hints, and it might choose to use more optimal values. The <code>SizeInMBs</code> and <code>IntervalInSeconds</code> parameters are optional. However, if specify a value for one of them, you must also provide a value for the other. </p>
 */
@interface AWSFirehoseHttpEndpointBufferingHints : AWSModel


/**
 <p>Buffer incoming data for the specified period of time, in seconds, before delivering it to the destination. The default value is 300 (5 minutes). </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable intervalInSeconds;

/**
 <p>Buffer incoming data to the specified size, in MBs, before delivering it to the destination. The default value is 5. </p><p>We recommend setting this parameter to a value greater than the amount of data you typically ingest into the delivery stream in 10 seconds. For example, if you typically ingest data at 1 MB/sec, the value should be 10 MB or higher. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sizeInMBs;

@end

/**
 <p>Describes the metadata that's delivered to the specified HTTP endpoint destination.</p>
 Required parameters: [AttributeName, AttributeValue]
 */
@interface AWSFirehoseHttpEndpointCommonAttribute : AWSModel


/**
 <p>The name of the HTTP endpoint common attribute.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attributeName;

/**
 <p>The value of the HTTP endpoint common attribute.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attributeValue;

@end

/**
 <p>Describes the configuration of the HTTP endpoint to which Kinesis Firehose delivers data.</p>
 Required parameters: [Url]
 */
@interface AWSFirehoseHttpEndpointConfiguration : AWSModel


/**
 <p>The access key required for Kinesis Firehose to authenticate with the HTTP endpoint selected as the destination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable accessKey;

/**
 <p>The name of the HTTP endpoint selected as the destination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The URL of the HTTP endpoint selected as the destination.</p><important><p>If you choose an HTTP endpoint as your destination, review and follow the instructions in the <a href="https://docs.aws.amazon.com/firehose/latest/dev/httpdeliveryrequestresponse.html">Appendix - HTTP Endpoint Delivery Request and Response Specifications</a>.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable url;

@end

/**
 <p>Describes the HTTP endpoint selected as the destination. </p>
 */
@interface AWSFirehoseHttpEndpointDescription : AWSModel


/**
 <p>The name of the HTTP endpoint selected as the destination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The URL of the HTTP endpoint selected as the destination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable url;

@end

/**
 <p>Describes the configuration of the HTTP endpoint destination.</p>
 Required parameters: [EndpointConfiguration, S3Configuration]
 */
@interface AWSFirehoseHttpEndpointDestinationConfiguration : AWSModel


/**
 <p>The buffering options that can be used before data is delivered to the specified destination. Kinesis Data Firehose treats these options as hints, and it might choose to use more optimal values. The <code>SizeInMBs</code> and <code>IntervalInSeconds</code> parameters are optional. However, if you specify a value for one of them, you must also provide a value for the other. </p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The configuration of the HTTP endpoint selected as the destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointConfiguration * _Nullable endpointConfiguration;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The configuration of the requeste sent to the HTTP endpoint specified as the destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointRequestConfiguration * _Nullable requestConfiguration;

/**
 <p>Describes the retry behavior in case Kinesis Data Firehose is unable to deliver data to the specified HTTP endpoint destination, or if it doesn't receive a valid acknowledgment of receipt from the specified HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointRetryOptions * _Nullable retryOptions;

/**
 <p>Kinesis Data Firehose uses this IAM role for all the permissions that the delivery stream needs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Describes the S3 bucket backup options for the data that Kinesis Data Firehose delivers to the HTTP endpoint destination. You can back up all documents (<code>AllData</code>) or only the documents that Kinesis Data Firehose could not deliver to the specified HTTP endpoint destination (<code>FailedDataOnly</code>).</p>
 */
@property (nonatomic, assign) AWSFirehoseHttpEndpointS3BackupMode s3BackupMode;

/**
 <p>Describes the configuration of a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3Configuration;

@end

/**
 <p>Describes the HTTP endpoint destination.</p>
 */
@interface AWSFirehoseHttpEndpointDestinationDescription : AWSModel


/**
 <p>Describes buffering options that can be applied to the data before it is delivered to the HTTPS endpoint destination. Kinesis Data Firehose teats these options as hints, and it might choose to use more optimal values. The <code>SizeInMBs</code> and <code>IntervalInSeconds</code> parameters are optional. However, if specify a value for one of them, you must also provide a value for the other. </p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The configuration of the specified HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointDescription * _Nullable endpointConfiguration;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The configuration of request sent to the HTTP endpoint specified as the destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointRequestConfiguration * _Nullable requestConfiguration;

/**
 <p>Describes the retry behavior in case Kinesis Data Firehose is unable to deliver data to the specified HTTP endpoint destination, or if it doesn't receive a valid acknowledgment of receipt from the specified HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointRetryOptions * _Nullable retryOptions;

/**
 <p>Kinesis Data Firehose uses this IAM role for all the permissions that the delivery stream needs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Describes the S3 bucket backup options for the data that Kinesis Firehose delivers to the HTTP endpoint destination. You can back up all documents (<code>AllData</code>) or only the documents that Kinesis Data Firehose could not deliver to the specified HTTP endpoint destination (<code>FailedDataOnly</code>).</p>
 */
@property (nonatomic, assign) AWSFirehoseHttpEndpointS3BackupMode s3BackupMode;

/**
 <p>Describes a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3DestinationDescription;

@end

/**
 <p>Updates the specified HTTP endpoint destination.</p>
 */
@interface AWSFirehoseHttpEndpointDestinationUpdate : AWSModel


/**
 <p>Describes buffering options that can be applied to the data before it is delivered to the HTTPS endpoint destination. Kinesis Data Firehose teats these options as hints, and it might choose to use more optimal values. The <code>SizeInMBs</code> and <code>IntervalInSeconds</code> parameters are optional. However, if specify a value for one of them, you must also provide a value for the other. </p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointBufferingHints * _Nullable bufferingHints;

/**
 <p>Describes the Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>Describes the configuration of the HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointConfiguration * _Nullable endpointConfiguration;

/**
 <p>Describes a data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The configuration of the request sent to the HTTP endpoint specified as the destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointRequestConfiguration * _Nullable requestConfiguration;

/**
 <p>Describes the retry behavior in case Kinesis Data Firehose is unable to deliver data to the specified HTTP endpoint destination, or if it doesn't receive a valid acknowledgment of receipt from the specified HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointRetryOptions * _Nullable retryOptions;

/**
 <p>Kinesis Data Firehose uses this IAM role for all the permissions that the delivery stream needs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Describes the S3 bucket backup options for the data that Kinesis Firehose delivers to the HTTP endpoint destination. You can back up all documents (<code>AllData</code>) or only the documents that Kinesis Data Firehose could not deliver to the specified HTTP endpoint destination (<code>FailedDataOnly</code>).</p>
 */
@property (nonatomic, assign) AWSFirehoseHttpEndpointS3BackupMode s3BackupMode;

/**
 <p>Describes an update for a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3Update;

@end

/**
 <p>The configuration of the HTTP endpoint request.</p>
 */
@interface AWSFirehoseHttpEndpointRequestConfiguration : AWSModel


/**
 <p>Describes the metadata sent to the HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseHttpEndpointCommonAttribute *> * _Nullable commonAttributes;

/**
 <p>Kinesis Data Firehose uses the content encoding to compress the body of a request before sending the request to the destination. For more information, see <a href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Encoding">Content-Encoding</a> in MDN Web Docs, the official Mozilla documentation.</p>
 */
@property (nonatomic, assign) AWSFirehoseContentEncoding contentEncoding;

@end

/**
 <p>Describes the retry behavior in case Kinesis Data Firehose is unable to deliver data to the specified HTTP endpoint destination, or if it doesn't receive a valid acknowledgment of receipt from the specified HTTP endpoint destination.</p>
 */
@interface AWSFirehoseHttpEndpointRetryOptions : AWSModel


/**
 <p>The total amount of time that Kinesis Data Firehose spends on retries. This duration starts after the initial attempt to send data to the custom destination via HTTPS endpoint fails. It doesn't include the periods during which Kinesis Data Firehose waits for acknowledgment from the specified destination after each attempt. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable durationInSeconds;

@end

/**
 <p>Specifies the deserializer you want to use to convert the format of the input data. This parameter is required if <code>Enabled</code> is set to true.</p>
 */
@interface AWSFirehoseInputFormatConfiguration : AWSModel


/**
 <p>Specifies which deserializer to use. You can choose either the Apache Hive JSON SerDe or the OpenX JSON SerDe. If both are non-null, the server rejects the request.</p>
 */
@property (nonatomic, strong) AWSFirehoseDeserializer * _Nullable deserializer;

@end

/**
 <p>Describes an encryption key for a destination in Amazon S3.</p>
 Required parameters: [AWSKMSKeyARN]
 */
@interface AWSFirehoseKMSEncryptionConfig : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the encryption key. Must belong to the same Amazon Web Services Region as the destination Amazon S3 bucket. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable AWSKMSKeyARN;

@end

/**
 <p>The stream and role Amazon Resource Names (ARNs) for a Kinesis data stream used as the source for a delivery stream.</p>
 Required parameters: [KinesisStreamARN, RoleARN]
 */
@interface AWSFirehoseKinesisStreamSourceConfiguration : AWSModel


/**
 <p>The ARN of the source Kinesis data stream. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon Kinesis Data Streams ARN Format</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kinesisStreamARN;

/**
 <p>The ARN of the role that provides access to the source Kinesis data stream. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">Amazon Web Services Identity and Access Management (IAM) ARN Format</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 <p>Details about a Kinesis data stream used as the source for a Kinesis Data Firehose delivery stream.</p>
 */
@interface AWSFirehoseKinesisStreamSourceDescription : AWSModel


/**
 <p>Kinesis Data Firehose starts retrieving records from the Kinesis data stream starting with this timestamp.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deliveryStartTimestamp;

/**
 <p>The Amazon Resource Name (ARN) of the source Kinesis data stream. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon Kinesis Data Streams ARN Format</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kinesisStreamARN;

/**
 <p>The ARN of the role used by the source Kinesis data stream. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">Amazon Web Services Identity and Access Management (IAM) ARN Format</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 
 */
@interface AWSFirehoseListDeliveryStreamsInput : AWSRequest


/**
 <p>The delivery stream type. This can be one of the following values:</p><ul><li><p><code>DirectPut</code>: Provider applications access the delivery stream directly.</p></li><li><p><code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data stream as a source.</p></li></ul><p>This parameter is optional. If this parameter is omitted, delivery streams of all types are returned.</p>
 */
@property (nonatomic, assign) AWSFirehoseDeliveryStreamType deliveryStreamType;

/**
 <p>The list of delivery streams returned by this call to <code>ListDeliveryStreams</code> will start with the delivery stream whose name comes alphabetically immediately after the name you specify in <code>ExclusiveStartDeliveryStreamName</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable exclusiveStartDeliveryStreamName;

/**
 <p>The maximum number of delivery streams to list. The default value is 10.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

@end

/**
 
 */
@interface AWSFirehoseListDeliveryStreamsOutput : AWSModel


/**
 <p>The names of the delivery streams.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable deliveryStreamNames;

/**
 <p>Indicates whether there are more delivery streams available to list.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable hasMoreDeliveryStreams;

@end

/**
 
 */
@interface AWSFirehoseListTagsForDeliveryStreamInput : AWSRequest


/**
 <p>The name of the delivery stream whose tags you want to list.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>The key to use as the starting point for the list of tags. If you set this parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after <code>ExclusiveStartTagKey</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable exclusiveStartTagKey;

/**
 <p>The number of tags to return. If this number is less than the total number of tags associated with the delivery stream, <code>HasMoreTags</code> is set to <code>true</code> in the response. To list additional tags, set <code>ExclusiveStartTagKey</code> to the last key in the response. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

@end

/**
 
 */
@interface AWSFirehoseListTagsForDeliveryStreamOutput : AWSModel


/**
 <p>If this is <code>true</code> in the response, more tags are available. To list the remaining tags, set <code>ExclusiveStartTagKey</code> to the key of the last tag returned and call <code>ListTagsForDeliveryStream</code> again.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable hasMoreTags;

/**
 <p>A list of tags associated with <code>DeliveryStreamName</code>, starting with the first tag after <code>ExclusiveStartTagKey</code> and up to the specified <code>Limit</code>.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseTag *> * _Nullable tags;

@end

/**
 <p>The configuration for the Amazon MSK cluster to be used as the source for a delivery stream.</p>
 Required parameters: [MSKClusterARN, TopicName, AuthenticationConfiguration]
 */
@interface AWSFirehoseMSKSourceConfiguration : AWSModel


/**
 <p>The authentication configuration of the Amazon MSK cluster.</p>
 */
@property (nonatomic, strong) AWSFirehoseAuthenticationConfiguration * _Nullable authenticationConfiguration;

/**
 <p>The ARN of the Amazon MSK cluster.</p>
 */
@property (nonatomic, strong) NSString * _Nullable MSKClusterARN;

/**
 <p>The topic name within the Amazon MSK cluster. </p>
 */
@property (nonatomic, strong) NSString * _Nullable topicName;

@end

/**
 <p>Details about the Amazon MSK cluster used as the source for a Kinesis Data Firehose delivery stream.</p>
 */
@interface AWSFirehoseMSKSourceDescription : AWSModel


/**
 <p>The authentication configuration of the Amazon MSK cluster.</p>
 */
@property (nonatomic, strong) AWSFirehoseAuthenticationConfiguration * _Nullable authenticationConfiguration;

/**
 <p>Kinesis Data Firehose starts retrieving records from the topic within the Amazon MSK cluster starting with this timestamp.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deliveryStartTimestamp;

/**
 <p>The ARN of the Amazon MSK cluster.</p>
 */
@property (nonatomic, strong) NSString * _Nullable MSKClusterARN;

/**
 <p>The topic name within the Amazon MSK cluster.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicName;

@end

/**
 <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which means converting it from the JSON format in preparation for serializing it to the Parquet or ORC format. This is one of two deserializers you can choose, depending on which one offers the functionality you need. The other option is the native Hive / HCatalog JsonSerDe.</p>
 */
@interface AWSFirehoseOpenXJsonSerDe : AWSModel


/**
 <p>When set to <code>true</code>, which is the default, Kinesis Data Firehose converts JSON keys to lowercase before deserializing them.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable caseInsensitive;

/**
 <p>Maps column names to JSON keys that aren't identical to the column names. This is useful when the JSON contains keys that are Hive keywords. For example, <code>timestamp</code> is a Hive keyword. If you have a JSON key named <code>timestamp</code>, set this parameter to <code>{"ts": "timestamp"}</code> to map this key to a column named <code>ts</code>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable columnToJsonKeyMappings;

/**
 <p>When set to <code>true</code>, specifies that the names of the keys include dots and that you want Kinesis Data Firehose to replace them with underscores. This is useful because Apache Hive does not allow dots in column names. For example, if the JSON contains a key whose name is "a.b", you can define the column name to be "a_b" when using this option.</p><p>The default is <code>false</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable convertDotsInJsonKeysToUnderscores;

@end

/**
 <p>A serializer to use for converting data to the ORC format before storing it in Amazon S3. For more information, see <a href="https://orc.apache.org/docs/">Apache ORC</a>.</p>
 */
@interface AWSFirehoseOrcSerDe : AWSModel


/**
 <p>The Hadoop Distributed File System (HDFS) block size. This is useful if you intend to copy the data from Amazon S3 to HDFS before querying. The default is 256 MiB and the minimum is 64 MiB. Kinesis Data Firehose uses this value for padding calculations.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable blockSizeBytes;

/**
 <p>The column names for which you want Kinesis Data Firehose to create bloom filters. The default is <code>null</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable bloomFilterColumns;

/**
 <p>The Bloom filter false positive probability (FPP). The lower the FPP, the bigger the Bloom filter. The default value is 0.05, the minimum is 0, and the maximum is 1.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bloomFilterFalsePositiveProbability;

/**
 <p>The compression code to use over data blocks. The default is <code>SNAPPY</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseOrcCompression compression;

/**
 <p>Represents the fraction of the total number of non-null rows. To turn off dictionary encoding, set this fraction to a number that is less than the number of distinct keys in a dictionary. To always use dictionary encoding, set this threshold to 1.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dictionaryKeyThreshold;

/**
 <p>Set this to <code>true</code> to indicate that you want stripes to be padded to the HDFS block boundaries. This is useful if you intend to copy the data from Amazon S3 to HDFS before querying. The default is <code>false</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enablePadding;

/**
 <p>The version of the file to write. The possible values are <code>V0_11</code> and <code>V0_12</code>. The default is <code>V0_12</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseOrcFormatVersion formatVersion;

/**
 <p>A number between 0 and 1 that defines the tolerance for block padding as a decimal fraction of stripe size. The default value is 0.05, which means 5 percent of stripe size.</p><p>For the default values of 64 MiB ORC stripes and 256 MiB HDFS blocks, the default block padding tolerance of 5 percent reserves a maximum of 3.2 MiB for padding within the 256 MiB block. In such a case, if the available size within the block is more than 3.2 MiB, a new, smaller stripe is inserted to fit within that space. This ensures that no stripe crosses block boundaries and causes remote reads within a node-local task.</p><p>Kinesis Data Firehose ignores this parameter when <a>OrcSerDe$EnablePadding</a> is <code>false</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable paddingTolerance;

/**
 <p>The number of rows between index entries. The default is 10,000 and the minimum is 1,000.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable rowIndexStride;

/**
 <p>The number of bytes in each stripe. The default is 64 MiB and the minimum is 8 MiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable stripeSizeBytes;

@end

/**
 <p>Specifies the serializer that you want Kinesis Data Firehose to use to convert the format of your data before it writes it to Amazon S3. This parameter is required if <code>Enabled</code> is set to true.</p>
 */
@interface AWSFirehoseOutputFormatConfiguration : AWSModel


/**
 <p>Specifies which serializer to use. You can choose either the ORC SerDe or the Parquet SerDe. If both are non-null, the server rejects the request.</p>
 */
@property (nonatomic, strong) AWSFirehoseSerializer * _Nullable serializer;

@end

/**
 <p>A serializer to use for converting data to the Parquet format before storing it in Amazon S3. For more information, see <a href="https://parquet.apache.org/documentation/latest/">Apache Parquet</a>.</p>
 */
@interface AWSFirehoseParquetSerDe : AWSModel


/**
 <p>The Hadoop Distributed File System (HDFS) block size. This is useful if you intend to copy the data from Amazon S3 to HDFS before querying. The default is 256 MiB and the minimum is 64 MiB. Kinesis Data Firehose uses this value for padding calculations.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable blockSizeBytes;

/**
 <p>The compression code to use over data blocks. The possible values are <code>UNCOMPRESSED</code>, <code>SNAPPY</code>, and <code>GZIP</code>, with the default being <code>SNAPPY</code>. Use <code>SNAPPY</code> for higher decompression speed. Use <code>GZIP</code> if the compression ratio is more important than speed.</p>
 */
@property (nonatomic, assign) AWSFirehoseParquetCompression compression;

/**
 <p>Indicates whether to enable dictionary compression.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enableDictionaryCompression;

/**
 <p>The maximum amount of padding to apply. This is useful if you intend to copy the data from Amazon S3 to HDFS before querying. The default is 0.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxPaddingBytes;

/**
 <p>The Parquet page size. Column chunks are divided into pages. A page is conceptually an indivisible unit (in terms of compression and encoding). The minimum value is 64 KiB and the default is 1 MiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable pageSizeBytes;

/**
 <p>Indicates the version of row format to output. The possible values are <code>V1</code> and <code>V2</code>. The default is <code>V1</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseParquetWriterVersion writerVersion;

@end

/**
 <p>Describes a data processing configuration.</p>
 */
@interface AWSFirehoseProcessingConfiguration : AWSModel


/**
 <p>Enables or disables data processing.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>The data processors.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseProcessor *> * _Nullable processors;

@end

/**
 <p>Describes a data processor.</p>
 Required parameters: [Type]
 */
@interface AWSFirehoseProcessor : AWSModel


/**
 <p>The processor parameters.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseProcessorParameter *> * _Nullable parameters;

/**
 <p>The type of processor.</p>
 */
@property (nonatomic, assign) AWSFirehoseProcessorType types;

@end

/**
 <p>Describes the processor parameter. </p>
 Required parameters: [ParameterName, ParameterValue]
 */
@interface AWSFirehoseProcessorParameter : AWSModel


/**
 <p>The name of the parameter. Currently the following default values are supported: 3 for <code>NumberOfRetries</code> and 60 for the <code>BufferIntervalInSeconds</code>. The <code>BufferSizeInMBs</code> ranges between 0.2 MB and up to 3MB. The default buffering hint is 1MB for all destinations, except Splunk. For Splunk, the default buffering hint is 256 KB. </p>
 */
@property (nonatomic, assign) AWSFirehoseProcessorParameterName parameterName;

/**
 <p>The parameter value.</p>
 */
@property (nonatomic, strong) NSString * _Nullable parameterValue;

@end

/**
 
 */
@interface AWSFirehosePutRecordBatchInput : AWSRequest


/**
 <p>The name of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>One or more records.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseRecord *> * _Nullable records;

@end

/**
 
 */
@interface AWSFirehosePutRecordBatchOutput : AWSModel


/**
 <p>Indicates whether server-side encryption (SSE) was enabled during this operation.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of records that might have failed processing. This number might be greater than 0 even if the <a>PutRecordBatch</a> call succeeds. Check <code>FailedPutCount</code> to determine whether there are records that you need to resend.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable failedPutCount;

/**
 <p>The results array. For each record, the index of the response element is the same as the index used in the request array.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehosePutRecordBatchResponseEntry *> * _Nullable requestResponses;

@end

/**
 <p>Contains the result for an individual record from a <a>PutRecordBatch</a> request. If the record is successfully added to your delivery stream, it receives a record ID. If the record fails to be added to your delivery stream, the result includes an error code and an error message.</p>
 */
@interface AWSFirehosePutRecordBatchResponseEntry : AWSModel


/**
 <p>The error code for an individual record result.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorCode;

/**
 <p>The error message for an individual record result.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorMessage;

/**
 <p>The ID of the record.</p>
 */
@property (nonatomic, strong) NSString * _Nullable recordId;

@end

/**
 
 */
@interface AWSFirehosePutRecordInput : AWSRequest


/**
 <p>The name of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>The record.</p>
 */
@property (nonatomic, strong) AWSFirehoseRecord * _Nullable record;

@end

/**
 
 */
@interface AWSFirehosePutRecordOutput : AWSModel


/**
 <p>Indicates whether server-side encryption (SSE) was enabled during this operation.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The ID of the record.</p>
 */
@property (nonatomic, strong) NSString * _Nullable recordId;

@end

/**
 <p>The unit of data in a delivery stream.</p>
 Required parameters: [Data]
 */
@interface AWSFirehoseRecord : AWSModel


/**
 <p>The data blob, which is base64-encoded when the blob is serialized. The maximum size of the data blob, before base64-encoding, is 1,000 KiB.</p>
 */
@property (nonatomic, strong) NSData * _Nullable data;

@end

/**
 <p>Describes the configuration of a destination in Amazon Redshift.</p>
 Required parameters: [RoleARN, ClusterJDBCURL, CopyCommand, Username, Password, S3Configuration]
 */
@interface AWSFirehoseRedshiftDestinationConfiguration : AWSModel


/**
 <p>The CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The database connection string.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterJDBCURL;

/**
 <p>The <code>COPY</code> command.</p>
 */
@property (nonatomic, strong) AWSFirehoseReplicateCommand * _Nullable replicateCommand;

/**
 <p>The user password.</p>
 */
@property (nonatomic, strong) NSString * _Nullable password;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
 */
@property (nonatomic, strong) AWSFirehoseRedshiftRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The configuration for backup in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3BackupConfiguration;

/**
 <p>The Amazon S3 backup mode. After you create a delivery stream, you can update it to enable Amazon S3 backup if it is disabled. If backup is enabled, you can't update the delivery stream to disable it. </p>
 */
@property (nonatomic, assign) AWSFirehoseRedshiftS3BackupMode s3BackupMode;

/**
 <p>The configuration for the intermediate Amazon S3 location from which Amazon Redshift obtains data. Restrictions are described in the topic for <a>CreateDeliveryStream</a>.</p><p>The compression formats <code>SNAPPY</code> or <code>ZIP</code> cannot be specified in <code>RedshiftDestinationConfiguration.S3Configuration</code> because the Amazon Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't support these compression formats.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3Configuration;

/**
 <p>The name of the user.</p>
 */
@property (nonatomic, strong) NSString * _Nullable username;

@end

/**
 <p>Describes a destination in Amazon Redshift.</p>
 Required parameters: [RoleARN, ClusterJDBCURL, CopyCommand, Username, S3DestinationDescription]
 */
@interface AWSFirehoseRedshiftDestinationDescription : AWSModel


/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The database connection string.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterJDBCURL;

/**
 <p>The <code>COPY</code> command.</p>
 */
@property (nonatomic, strong) AWSFirehoseReplicateCommand * _Nullable replicateCommand;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
 */
@property (nonatomic, strong) AWSFirehoseRedshiftRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The configuration for backup in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3BackupDescription;

/**
 <p>The Amazon S3 backup mode.</p>
 */
@property (nonatomic, assign) AWSFirehoseRedshiftS3BackupMode s3BackupMode;

/**
 <p>The Amazon S3 destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3DestinationDescription;

/**
 <p>The name of the user.</p>
 */
@property (nonatomic, strong) NSString * _Nullable username;

@end

/**
 <p>Describes an update for a destination in Amazon Redshift.</p>
 */
@interface AWSFirehoseRedshiftDestinationUpdate : AWSModel


/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The database connection string.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clusterJDBCURL;

/**
 <p>The <code>COPY</code> command.</p>
 */
@property (nonatomic, strong) AWSFirehoseReplicateCommand * _Nullable replicateCommand;

/**
 <p>The user password.</p>
 */
@property (nonatomic, strong) NSString * _Nullable password;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
 */
@property (nonatomic, strong) AWSFirehoseRedshiftRetryOptions * _Nullable retryOptions;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>You can update a delivery stream to enable Amazon S3 backup if it is disabled. If backup is enabled, you can't update the delivery stream to disable it. </p>
 */
@property (nonatomic, assign) AWSFirehoseRedshiftS3BackupMode s3BackupMode;

/**
 <p>The Amazon S3 destination for backup.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3BackupUpdate;

/**
 <p>The Amazon S3 destination.</p><p>The compression formats <code>SNAPPY</code> or <code>ZIP</code> cannot be specified in <code>RedshiftDestinationUpdate.S3Update</code> because the Amazon Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't support these compression formats.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3Update;

/**
 <p>The name of the user.</p>
 */
@property (nonatomic, strong) NSString * _Nullable username;

@end

/**
 <p>Configures retry behavior in case Kinesis Data Firehose is unable to deliver documents to Amazon Redshift.</p>
 */
@interface AWSFirehoseRedshiftRetryOptions : AWSModel


/**
 <p>The length of time during which Kinesis Data Firehose retries delivery after a failure, starting from the initial request and including the first attempt. The default value is 3600 seconds (60 minutes). Kinesis Data Firehose does not retry if the value of <code>DurationInSeconds</code> is 0 (zero) or if the first delivery attempt takes longer than the current value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable durationInSeconds;

@end

/**
 <p> The retry behavior in case Kinesis Data Firehose is unable to deliver data to an Amazon S3 prefix.</p>
 */
@interface AWSFirehoseRetryOptions : AWSModel


/**
 <p>The period of time during which Kinesis Data Firehose retries to deliver data to the specified Amazon S3 prefix.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable durationInSeconds;

@end

/**
 <p>Describes the configuration of a destination in Amazon S3.</p>
 Required parameters: [RoleARN, BucketARN]
 */
@interface AWSFirehoseS3DestinationConfiguration : AWSModel


/**
 <p>The ARN of the S3 bucket. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucketARN;

/**
 <p>The buffering option. If no value is specified, <code>BufferingHints</code> object default values are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseBufferingHints * _Nullable bufferingHints;

/**
 <p>The CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The compression format. If no value is specified, the default is <code>UNCOMPRESSED</code>.</p><p>The compression formats <code>SNAPPY</code> or <code>ZIP</code> cannot be specified for Amazon Redshift destinations because they are not supported by the Amazon Redshift <code>COPY</code> operation that reads from the S3 bucket.</p>
 */
@property (nonatomic, assign) AWSFirehoseCompressionFormat compressionFormat;

/**
 <p>The encryption configuration. If no value is specified, the default is no encryption.</p>
 */
@property (nonatomic, strong) AWSFirehoseEncryptionConfiguration * _Nullable encryptionConfiguration;

/**
 <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records before writing them to S3. This prefix appears immediately following the bucket name. For information about how to specify this prefix, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorOutputPrefix;

/**
 <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered Amazon S3 files. You can also specify a custom prefix, as described in <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 <p>Describes a destination in Amazon S3.</p>
 Required parameters: [RoleARN, BucketARN, BufferingHints, CompressionFormat, EncryptionConfiguration]
 */
@interface AWSFirehoseS3DestinationDescription : AWSModel


/**
 <p>The ARN of the S3 bucket. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucketARN;

/**
 <p>The buffering option. If no value is specified, <code>BufferingHints</code> object default values are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The compression format. If no value is specified, the default is <code>UNCOMPRESSED</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseCompressionFormat compressionFormat;

/**
 <p>The encryption configuration. If no value is specified, the default is no encryption.</p>
 */
@property (nonatomic, strong) AWSFirehoseEncryptionConfiguration * _Nullable encryptionConfiguration;

/**
 <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records before writing them to S3. This prefix appears immediately following the bucket name. For information about how to specify this prefix, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorOutputPrefix;

/**
 <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered Amazon S3 files. You can also specify a custom prefix, as described in <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 <p>Describes an update for a destination in Amazon S3.</p>
 */
@interface AWSFirehoseS3DestinationUpdate : AWSModel


/**
 <p>The ARN of the S3 bucket. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucketARN;

/**
 <p>The buffering option. If no value is specified, <code>BufferingHints</code> object default values are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseBufferingHints * _Nullable bufferingHints;

/**
 <p>The CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The compression format. If no value is specified, the default is <code>UNCOMPRESSED</code>.</p><p>The compression formats <code>SNAPPY</code> or <code>ZIP</code> cannot be specified for Amazon Redshift destinations because they are not supported by the Amazon Redshift <code>COPY</code> operation that reads from the S3 bucket.</p>
 */
@property (nonatomic, assign) AWSFirehoseCompressionFormat compressionFormat;

/**
 <p>The encryption configuration. If no value is specified, the default is no encryption.</p>
 */
@property (nonatomic, strong) AWSFirehoseEncryptionConfiguration * _Nullable encryptionConfiguration;

/**
 <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records before writing them to S3. This prefix appears immediately following the bucket name. For information about how to specify this prefix, see <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorOutputPrefix;

/**
 <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered Amazon S3 files. You can also specify a custom prefix, as described in <a href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom Prefixes for Amazon S3 Objects</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 <p>Specifies the schema to which you want Kinesis Data Firehose to configure your data before it writes it to Amazon S3. This parameter is required if <code>Enabled</code> is set to true.</p>
 */
@interface AWSFirehoseSchemaConfiguration : AWSModel


/**
 <p>The ID of the Amazon Web Services Glue Data Catalog. If you don't supply this, the Amazon Web Services account ID is used by default.</p>
 */
@property (nonatomic, strong) NSString * _Nullable catalogId;

/**
 <p>Specifies the name of the Amazon Web Services Glue database that contains the schema for the output data.</p><important><p>If the <code>SchemaConfiguration</code> request parameter is used as part of invoking the <code>CreateDeliveryStream</code> API, then the <code>DatabaseName</code> property is required and its value must be specified.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable databaseName;

/**
 <p>If you don't specify an Amazon Web Services Region, the default is the current Region.</p>
 */
@property (nonatomic, strong) NSString * _Nullable region;

/**
 <p>The role that Kinesis Data Firehose can use to access Amazon Web Services Glue. This role must be in the same account you use for Kinesis Data Firehose. Cross-account roles aren't allowed.</p><important><p>If the <code>SchemaConfiguration</code> request parameter is used as part of invoking the <code>CreateDeliveryStream</code> API, then the <code>RoleARN</code> property is required and its value must be specified.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>Specifies the Amazon Web Services Glue table that contains the column information that constitutes your data schema.</p><important><p>If the <code>SchemaConfiguration</code> request parameter is used as part of invoking the <code>CreateDeliveryStream</code> API, then the <code>TableName</code> property is required and its value must be specified.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable tableName;

/**
 <p>Specifies the table version for the output data schema. If you don't specify this version ID, or if you set it to <code>LATEST</code>, Kinesis Data Firehose uses the most recent version. This means that any updates to the table are automatically picked up.</p>
 */
@property (nonatomic, strong) NSString * _Nullable versionId;

@end

/**
 <p>The serializer that you want Kinesis Data Firehose to use to convert data to the target format before writing it to Amazon S3. Kinesis Data Firehose supports two types of serializers: the <a href="https://hive.apache.org/javadocs/r1.2.2/api/org/apache/hadoop/hive/ql/io/orc/OrcSerde.html">ORC SerDe</a> and the <a href="https://hive.apache.org/javadocs/r1.2.2/api/org/apache/hadoop/hive/ql/io/parquet/serde/ParquetHiveSerDe.html">Parquet SerDe</a>.</p>
 */
@interface AWSFirehoseSerializer : AWSModel


/**
 <p>A serializer to use for converting data to the ORC format before storing it in Amazon S3. For more information, see <a href="https://orc.apache.org/docs/">Apache ORC</a>.</p>
 */
@property (nonatomic, strong) AWSFirehoseOrcSerDe * _Nullable orcSerDe;

/**
 <p>A serializer to use for converting data to the Parquet format before storing it in Amazon S3. For more information, see <a href="https://parquet.apache.org/documentation/latest/">Apache Parquet</a>.</p>
 */
@property (nonatomic, strong) AWSFirehoseParquetSerDe * _Nullable parquetSerDe;

@end

/**
 <p>Details about a Kinesis data stream used as the source for a Kinesis Data Firehose delivery stream.</p>
 */
@interface AWSFirehoseSourceDescription : AWSModel


/**
 <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseKinesisStreamSourceDescription * _Nullable kinesisStreamSourceDescription;

/**
 <p>The configuration description for the Amazon MSK cluster to be used as the source for a delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseMSKSourceDescription * _Nullable MSKSourceDescription;

@end

/**
 <p>The buffering options. If no value is specified, the default values for Splunk are used.</p>
 */
@interface AWSFirehoseSplunkBufferingHints : AWSModel


/**
 <p>Buffer incoming data for the specified period of time, in seconds, before delivering it to the destination. The default value is 60 (1 minute).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable intervalInSeconds;

/**
 <p>Buffer incoming data to the specified size, in MBs, before delivering it to the destination. The default value is 5. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sizeInMBs;

@end

/**
 <p>Describes the configuration of a destination in Splunk.</p>
 Required parameters: [HECEndpoint, HECEndpointType, HECToken, S3Configuration]
 */
@interface AWSFirehoseSplunkDestinationConfiguration : AWSModel


/**
 <p>The buffering options. If no value is specified, the default values for Splunk are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The amount of time that Kinesis Data Firehose waits to receive an acknowledgment from Splunk after it sends it data. At the end of the timeout period, Kinesis Data Firehose either tries to send the data again or considers it an error, based on your retry settings.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable HECAcknowledgmentTimeoutInSeconds;

/**
 <p>The HTTP Event Collector (HEC) endpoint to which Kinesis Data Firehose sends your data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable HECEndpoint;

/**
 <p>This type can be either "Raw" or "Event."</p>
 */
@property (nonatomic, assign) AWSFirehoseHECEndpointType HECEndpointType;

/**
 <p>This is a GUID that you obtain from your Splunk cluster when you create a new HEC endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable HECToken;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to Splunk, or if it doesn't receive an acknowledgment of receipt from Splunk.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkRetryOptions * _Nullable retryOptions;

/**
 <p>Defines how documents should be delivered to Amazon S3. When set to <code>FailedEventsOnly</code>, Kinesis Data Firehose writes any data that could not be indexed to the configured Amazon S3 destination. When set to <code>AllEvents</code>, Kinesis Data Firehose delivers all incoming records to Amazon S3, and also writes failed documents to Amazon S3. The default value is <code>FailedEventsOnly</code>.</p><p>You can update this backup mode from <code>FailedEventsOnly</code> to <code>AllEvents</code>. You can't update it from <code>AllEvents</code> to <code>FailedEventsOnly</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseSplunkS3BackupMode s3BackupMode;

/**
 <p>The configuration for the backup Amazon S3 location.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationConfiguration * _Nullable s3Configuration;

@end

/**
 <p>Describes a destination in Splunk.</p>
 */
@interface AWSFirehoseSplunkDestinationDescription : AWSModel


/**
 <p>The buffering options. If no value is specified, the default values for Splunk are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The amount of time that Kinesis Data Firehose waits to receive an acknowledgment from Splunk after it sends it data. At the end of the timeout period, Kinesis Data Firehose either tries to send the data again or considers it an error, based on your retry settings.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable HECAcknowledgmentTimeoutInSeconds;

/**
 <p>The HTTP Event Collector (HEC) endpoint to which Kinesis Data Firehose sends your data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable HECEndpoint;

/**
 <p>This type can be either "Raw" or "Event."</p>
 */
@property (nonatomic, assign) AWSFirehoseHECEndpointType HECEndpointType;

/**
 <p>A GUID you obtain from your Splunk cluster when you create a new HEC endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable HECToken;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to Splunk or if it doesn't receive an acknowledgment of receipt from Splunk.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkRetryOptions * _Nullable retryOptions;

/**
 <p>Defines how documents should be delivered to Amazon S3. When set to <code>FailedDocumentsOnly</code>, Kinesis Data Firehose writes any data that could not be indexed to the configured Amazon S3 destination. When set to <code>AllDocuments</code>, Kinesis Data Firehose delivers all incoming records to Amazon S3, and also writes failed documents to Amazon S3. Default value is <code>FailedDocumentsOnly</code>. </p>
 */
@property (nonatomic, assign) AWSFirehoseSplunkS3BackupMode s3BackupMode;

/**
 <p>The Amazon S3 destination.&gt;</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationDescription * _Nullable s3DestinationDescription;

@end

/**
 <p>Describes an update for a destination in Splunk.</p>
 */
@interface AWSFirehoseSplunkDestinationUpdate : AWSModel


/**
 <p>The buffering options. If no value is specified, the default values for Splunk are used.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkBufferingHints * _Nullable bufferingHints;

/**
 <p>The Amazon CloudWatch logging options for your delivery stream.</p>
 */
@property (nonatomic, strong) AWSFirehoseCloudWatchLoggingOptions * _Nullable cloudWatchLoggingOptions;

/**
 <p>The amount of time that Kinesis Data Firehose waits to receive an acknowledgment from Splunk after it sends data. At the end of the timeout period, Kinesis Data Firehose either tries to send the data again or considers it an error, based on your retry settings.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable HECAcknowledgmentTimeoutInSeconds;

/**
 <p>The HTTP Event Collector (HEC) endpoint to which Kinesis Data Firehose sends your data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable HECEndpoint;

/**
 <p>This type can be either "Raw" or "Event."</p>
 */
@property (nonatomic, assign) AWSFirehoseHECEndpointType HECEndpointType;

/**
 <p>A GUID that you obtain from your Splunk cluster when you create a new HEC endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable HECToken;

/**
 <p>The data processing configuration.</p>
 */
@property (nonatomic, strong) AWSFirehoseProcessingConfiguration * _Nullable processingConfiguration;

/**
 <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to Splunk or if it doesn't receive an acknowledgment of receipt from Splunk.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkRetryOptions * _Nullable retryOptions;

/**
 <p>Specifies how you want Kinesis Data Firehose to back up documents to Amazon S3. When set to <code>FailedDocumentsOnly</code>, Kinesis Data Firehose writes any data that could not be indexed to the configured Amazon S3 destination. When set to <code>AllEvents</code>, Kinesis Data Firehose delivers all incoming records to Amazon S3, and also writes failed documents to Amazon S3. The default value is <code>FailedEventsOnly</code>.</p><p>You can update this backup mode from <code>FailedEventsOnly</code> to <code>AllEvents</code>. You can't update it from <code>AllEvents</code> to <code>FailedEventsOnly</code>.</p>
 */
@property (nonatomic, assign) AWSFirehoseSplunkS3BackupMode s3BackupMode;

/**
 <p>Your update to the configuration of the backup Amazon S3 location.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3Update;

@end

/**
 <p>Configures retry behavior in case Kinesis Data Firehose is unable to deliver documents to Splunk, or if it doesn't receive an acknowledgment from Splunk.</p>
 */
@interface AWSFirehoseSplunkRetryOptions : AWSModel


/**
 <p>The total amount of time that Kinesis Data Firehose spends on retries. This duration starts after the initial attempt to send data to Splunk fails. It doesn't include the periods during which Kinesis Data Firehose waits for acknowledgment from Splunk after each attempt.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable durationInSeconds;

@end

/**
 
 */
@interface AWSFirehoseStartDeliveryStreamEncryptionInput : AWSRequest


/**
 <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed for Server-Side Encryption (SSE).</p>
 */
@property (nonatomic, strong) AWSFirehoseDeliveryStreamEncryptionConfigurationInput * _Nullable deliveryStreamEncryptionConfigurationInput;

/**
 <p>The name of the delivery stream for which you want to enable server-side encryption (SSE).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

@end

/**
 
 */
@interface AWSFirehoseStartDeliveryStreamEncryptionOutput : AWSModel


@end

/**
 
 */
@interface AWSFirehoseStopDeliveryStreamEncryptionInput : AWSRequest


/**
 <p>The name of the delivery stream for which you want to disable server-side encryption (SSE).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

@end

/**
 
 */
@interface AWSFirehoseStopDeliveryStreamEncryptionOutput : AWSModel


@end

/**
 <p>Metadata that you can assign to a delivery stream, consisting of a key-value pair.</p>
 Required parameters: [Key]
 */
@interface AWSFirehoseTag : AWSModel


/**
 <p>A unique identifier for the tag. Maximum length: 128 characters. Valid characters: Unicode letters, digits, white space, _ . / = + - % @</p>
 */
@property (nonatomic, strong) NSString * _Nullable key;

/**
 <p>An optional string, which you can use to describe or define the tag. Maximum length: 256 characters. Valid characters: Unicode letters, digits, white space, _ . / = + - % @</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 
 */
@interface AWSFirehoseTagDeliveryStreamInput : AWSRequest


/**
 <p>The name of the delivery stream to which you want to add the tags.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>A set of key-value pairs to use to create the tags.</p>
 */
@property (nonatomic, strong) NSArray<AWSFirehoseTag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSFirehoseTagDeliveryStreamOutput : AWSModel


@end

/**
 
 */
@interface AWSFirehoseUntagDeliveryStreamInput : AWSRequest


/**
 <p>The name of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>A list of tag keys. Each corresponding tag is removed from the delivery stream.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable tagKeys;

@end

/**
 
 */
@interface AWSFirehoseUntagDeliveryStreamOutput : AWSModel


@end

/**
 
 */
@interface AWSFirehoseUpdateDestinationInput : AWSRequest


/**
 <p>Describes an update for a destination in the Serverless offering for Amazon OpenSearch Service.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonOpenSearchServerlessDestinationUpdate * _Nullable amazonOpenSearchServerlessDestinationUpdate;

/**
 <p>Describes an update for a destination in Amazon OpenSearch Service.</p>
 */
@property (nonatomic, strong) AWSFirehoseAmazonopensearchserviceDestinationUpdate * _Nullable amazonopensearchserviceDestinationUpdate;

/**
 <p>Obtain this value from the <code>VersionId</code> result of <a>DeliveryStreamDescription</a>. This value is required, and helps the service perform conditional operations. For example, if there is an interleaving update and this value is null, then the update destination fails. After the update is successful, the <code>VersionId</code> value is updated. The service then performs a merge of the old configuration with the new configuration.</p>
 */
@property (nonatomic, strong) NSString * _Nullable currentDeliveryStreamVersionId;

/**
 <p>The name of the delivery stream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryStreamName;

/**
 <p>The ID of the destination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationId;

/**
 <p>Describes an update for a destination in Amazon ES.</p>
 */
@property (nonatomic, strong) AWSFirehoseElasticsearchDestinationUpdate * _Nullable elasticsearchDestinationUpdate;

/**
 <p>Describes an update for a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseExtendedS3DestinationUpdate * _Nullable extendedS3DestinationUpdate;

/**
 <p>Describes an update to the specified HTTP endpoint destination.</p>
 */
@property (nonatomic, strong) AWSFirehoseHttpEndpointDestinationUpdate * _Nullable httpEndpointDestinationUpdate;

/**
 <p>Describes an update for a destination in Amazon Redshift.</p>
 */
@property (nonatomic, strong) AWSFirehoseRedshiftDestinationUpdate * _Nullable redshiftDestinationUpdate;

/**
 <p>[Deprecated] Describes an update for a destination in Amazon S3.</p>
 */
@property (nonatomic, strong) AWSFirehoseS3DestinationUpdate * _Nullable s3DestinationUpdate;

/**
 <p>Describes an update for a destination in Splunk.</p>
 */
@property (nonatomic, strong) AWSFirehoseSplunkDestinationUpdate * _Nullable splunkDestinationUpdate;

@end

/**
 
 */
@interface AWSFirehoseUpdateDestinationOutput : AWSModel


@end

/**
 <p>The details of the VPC of the Amazon OpenSearch or Amazon OpenSearch Serverless destination.</p>
 Required parameters: [SubnetIds, RoleARN, SecurityGroupIds]
 */
@interface AWSFirehoseVpcConfiguration : AWSModel


/**
 <p>The ARN of the IAM role that you want the delivery stream to use to create endpoints in the destination VPC. You can use your existing Kinesis Data Firehose delivery role or you can specify a new role. In either case, make sure that the role trusts the Kinesis Data Firehose service principal and that it grants the following permissions:</p><ul><li><p><code>ec2:DescribeVpcs</code></p></li><li><p><code>ec2:DescribeVpcAttribute</code></p></li><li><p><code>ec2:DescribeSubnets</code></p></li><li><p><code>ec2:DescribeSecurityGroups</code></p></li><li><p><code>ec2:DescribeNetworkInterfaces</code></p></li><li><p><code>ec2:CreateNetworkInterface</code></p></li><li><p><code>ec2:CreateNetworkInterfacePermission</code></p></li><li><p><code>ec2:DeleteNetworkInterface</code></p></li></ul><p>If you revoke these permissions after you create the delivery stream, Kinesis Data Firehose can't scale out by creating more ENIs when necessary. You might therefore see a degradation in performance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The IDs of the security groups that you want Kinesis Data Firehose to use when it creates ENIs in the VPC of the Amazon ES destination. You can use the same security group that the Amazon ES domain uses or different ones. If you specify different security groups here, ensure that they allow outbound HTTPS traffic to the Amazon ES domain's security group. Also ensure that the Amazon ES domain's security group allows HTTPS traffic from the security groups specified here. If you use the same security group for both your delivery stream and the Amazon ES domain, make sure the security group inbound rule allows HTTPS traffic. For more information about security group rules, see <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security group rules</a> in the Amazon VPC documentation.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>The IDs of the subnets that you want Kinesis Data Firehose to use to create ENIs in the VPC of the Amazon ES destination. Make sure that the routing tables and inbound and outbound rules allow traffic to flow from the subnets whose IDs are specified here to the subnets that have the destination Amazon ES endpoints. Kinesis Data Firehose creates at least one ENI in each of the subnets that are specified here. Do not delete or modify these ENIs.</p><p>The number of ENIs that Kinesis Data Firehose creates in the subnets specified here scales up and down automatically based on throughput. To enable Kinesis Data Firehose to scale up the number of ENIs to match throughput, ensure that you have sufficient quota. To help you calculate the quota you need, assume that Kinesis Data Firehose can create up to three ENIs for this delivery stream for each of the subnets specified here. For more information about ENI quota, see <a href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network Interfaces </a> in the Amazon VPC Quotas topic.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable subnetIds;

@end

/**
 <p>The details of the VPC of the Amazon ES destination.</p>
 Required parameters: [SubnetIds, RoleARN, SecurityGroupIds, VpcId]
 */
@interface AWSFirehoseVpcConfigurationDescription : AWSModel


/**
 <p>The ARN of the IAM role that the delivery stream uses to create endpoints in the destination VPC. You can use your existing Kinesis Data Firehose delivery role or you can specify a new role. In either case, make sure that the role trusts the Kinesis Data Firehose service principal and that it grants the following permissions:</p><ul><li><p><code>ec2:DescribeVpcs</code></p></li><li><p><code>ec2:DescribeVpcAttribute</code></p></li><li><p><code>ec2:DescribeSubnets</code></p></li><li><p><code>ec2:DescribeSecurityGroups</code></p></li><li><p><code>ec2:DescribeNetworkInterfaces</code></p></li><li><p><code>ec2:CreateNetworkInterface</code></p></li><li><p><code>ec2:CreateNetworkInterfacePermission</code></p></li><li><p><code>ec2:DeleteNetworkInterface</code></p></li></ul><p>If you revoke these permissions after you create the delivery stream, Kinesis Data Firehose can't scale out by creating more ENIs when necessary. You might therefore see a degradation in performance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

/**
 <p>The IDs of the security groups that Kinesis Data Firehose uses when it creates ENIs in the VPC of the Amazon ES destination. You can use the same security group that the Amazon ES domain uses or different ones. If you specify different security groups, ensure that they allow outbound HTTPS traffic to the Amazon ES domain's security group. Also ensure that the Amazon ES domain's security group allows HTTPS traffic from the security groups specified here. If you use the same security group for both your delivery stream and the Amazon ES domain, make sure the security group inbound rule allows HTTPS traffic. For more information about security group rules, see <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security group rules</a> in the Amazon VPC documentation.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the VPC of the Amazon ES destination. Make sure that the routing tables and inbound and outbound rules allow traffic to flow from the subnets whose IDs are specified here to the subnets that have the destination Amazon ES endpoints. Kinesis Data Firehose creates at least one ENI in each of the subnets that are specified here. Do not delete or modify these ENIs.</p><p>The number of ENIs that Kinesis Data Firehose creates in the subnets specified here scales up and down automatically based on throughput. To enable Kinesis Data Firehose to scale up the number of ENIs to match throughput, ensure that you have sufficient quota. To help you calculate the quota you need, assume that Kinesis Data Firehose can create up to three ENIs for this delivery stream for each of the subnets specified here. For more information about ENI quota, see <a href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network Interfaces </a> in the Amazon VPC Quotas topic.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable subnetIds;

/**
 <p>The ID of the Amazon ES destination's VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

NS_ASSUME_NONNULL_END
