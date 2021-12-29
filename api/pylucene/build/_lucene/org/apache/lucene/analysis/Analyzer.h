#ifndef org_apache_lucene_analysis_Analyzer_H
#define org_apache_lucene_analysis_Analyzer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
        class BytesRef;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer$ReuseStrategy;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Analyzer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_e42cc94d4b9f3f5e,
            mid_close_f2cc1bce94666404,
            mid_getOffsetGap_a5a7d1128e9e2bb7,
            mid_getPositionIncrementGap_a5a7d1128e9e2bb7,
            mid_getReuseStrategy_fac8abbdfb8de3f7,
            mid_getVersion_6b68647131bbda98,
            mid_normalize_7ec4806c73267fd9,
            mid_setVersion_8d0afbac9e78af32,
            mid_tokenStream_4d8a0821b29081b4,
            mid_tokenStream_aa7af853b58ab542,
            mid_attributeFactory_11e9c67770fe4372,
            mid_createComponents_c22fd244b0553c1e,
            mid_initReader_8dbb4487391277c7,
            mid_initReaderForNormalization_8dbb4487391277c7,
            mid_normalize_e597989422f66fcd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Analyzer(const Analyzer& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *GLOBAL_REUSE_STRATEGY;
          static ::org::apache::lucene::analysis::Analyzer$ReuseStrategy *PER_FIELD_REUSE_STRATEGY;

          Analyzer();
          Analyzer(const ::org::apache::lucene::analysis::Analyzer$ReuseStrategy &);

          void close() const;
          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::org::apache::lucene::analysis::Analyzer$ReuseStrategy getReuseStrategy() const;
          ::org::apache::lucene::util::Version getVersion() const;
          ::org::apache::lucene::util::BytesRef normalize(const ::java::lang::String &, const ::java::lang::String &) const;
          void setVersion(const ::org::apache::lucene::util::Version &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::io::Reader &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(Analyzer);
        extern PyTypeObject *PY_TYPE(Analyzer);

        class t_Analyzer {
        public:
          PyObject_HEAD
          Analyzer object;
          static PyObject *wrap_Object(const Analyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
