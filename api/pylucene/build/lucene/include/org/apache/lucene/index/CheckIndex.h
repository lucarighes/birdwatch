#ifndef org_apache_lucene_index_CheckIndex_H
#define org_apache_lucene_index_CheckIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CodecReader;
        class CheckIndex$Status$TermVectorStatus;
        class CheckIndex$Status$IndexSortStatus;
        class CheckIndex$Status;
        class CheckIndex$Options;
        class CheckIndex$Status$TermIndexStatus;
        class CheckIndex$Status$FieldNormStatus;
        class CheckIndex$Status$DocValuesStatus;
        class CheckIndex$Status$FieldInfoStatus;
        class CheckIndex$Status$PointsStatus;
        class CheckIndex$Status$StoredFieldStatus;
        class CheckIndex$Status$LiveDocStatus;
      }
      namespace store {
        class Lock;
        class Directory;
      }
      namespace search {
        class Sort;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class InterruptedException;
  }
  namespace io {
    class PrintStream;
    class Closeable;
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c51fd9fb1cf0392d,
            mid_init$_79d7a2fc1d47b5f2,
            mid_assertsOn_8454bd5aa23fd11e,
            mid_checkIndex_edce15eafe031069,
            mid_checkIndex_451c481213097fa8,
            mid_close_f2cc1bce94666404,
            mid_doCheck_acbf5774feec2c83,
            mid_doSlowChecks_8454bd5aa23fd11e,
            mid_exorciseIndex_910cd3fc76add463,
            mid_getChecksumsOnly_8454bd5aa23fd11e,
            mid_getFailFast_8454bd5aa23fd11e,
            mid_main_2fc318b999a7aba3,
            mid_parseOptions_7336ac587a7d10ea,
            mid_setChecksumsOnly_9d72768e8fdce2b7,
            mid_setDoSlowChecks_9d72768e8fdce2b7,
            mid_setFailFast_9d72768e8fdce2b7,
            mid_setInfoStream_51d7bcb97eea24e3,
            mid_setInfoStream_e912f9b165d7d4ea,
            mid_testDocValues_564756a64495bf41,
            mid_testFieldInfos_1b0c793235d994c3,
            mid_testFieldNorms_d7cc9f44e48eafcb,
            mid_testLiveDocs_75d452bf036e9277,
            mid_testPoints_eabf892e502903a9,
            mid_testPostings_d8a12926df9f9cf8,
            mid_testPostings_9eb2a6bf39823159,
            mid_testSort_18439b76d3011751,
            mid_testStoredFields_86256ec535b4c3c7,
            mid_testTermVectors_dcb71f51d8fb33d0,
            mid_testTermVectors_b0b190dc18cfcf3b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex(const CheckIndex& obj) : ::java::lang::Object(obj) {}

          CheckIndex(const ::org::apache::lucene::store::Directory &);
          CheckIndex(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Lock &);

          static jboolean assertsOn();
          ::org::apache::lucene::index::CheckIndex$Status checkIndex() const;
          ::org::apache::lucene::index::CheckIndex$Status checkIndex(const ::java::util::List &) const;
          void close() const;
          jint doCheck(const ::org::apache::lucene::index::CheckIndex$Options &) const;
          jboolean doSlowChecks() const;
          void exorciseIndex(const ::org::apache::lucene::index::CheckIndex$Status &) const;
          jboolean getChecksumsOnly() const;
          jboolean getFailFast() const;
          static void main(const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::index::CheckIndex$Options parseOptions(const JArray< ::java::lang::String > &);
          void setChecksumsOnly(jboolean) const;
          void setDoSlowChecks(jboolean) const;
          void setFailFast(jboolean) const;
          void setInfoStream(const ::java::io::PrintStream &) const;
          void setInfoStream(const ::java::io::PrintStream &, jboolean) const;
          static ::org::apache::lucene::index::CheckIndex$Status$DocValuesStatus testDocValues(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$FieldInfoStatus testFieldInfos(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$FieldNormStatus testFieldNorms(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$LiveDocStatus testLiveDocs(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$PointsStatus testPoints(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermIndexStatus testPostings(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean, jboolean, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$IndexSortStatus testSort(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::search::Sort &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$StoredFieldStatus testStoredFields(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &);
          static ::org::apache::lucene::index::CheckIndex$Status$TermVectorStatus testTermVectors(const ::org::apache::lucene::index::CodecReader &, const ::java::io::PrintStream &, jboolean, jboolean, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(CheckIndex);
        extern PyTypeObject *PY_TYPE(CheckIndex);

        class t_CheckIndex {
        public:
          PyObject_HEAD
          CheckIndex object;
          static PyObject *wrap_Object(const CheckIndex&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
