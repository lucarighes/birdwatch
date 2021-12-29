#ifndef org_apache_lucene_analysis_sinks_TeeSinkTokenFilter$SinkTokenStream_H
#define org_apache_lucene_analysis_sinks_TeeSinkTokenFilter$SinkTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sinks {

          class TeeSinkTokenFilter$SinkTokenStream : public ::org::apache::lucene::analysis::TokenStream {
           public:
            enum {
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TeeSinkTokenFilter$SinkTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TeeSinkTokenFilter$SinkTokenStream(const TeeSinkTokenFilter$SinkTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sinks {
          extern PyType_Def PY_TYPE_DEF(TeeSinkTokenFilter$SinkTokenStream);
          extern PyTypeObject *PY_TYPE(TeeSinkTokenFilter$SinkTokenStream);

          class t_TeeSinkTokenFilter$SinkTokenStream {
          public:
            PyObject_HEAD
            TeeSinkTokenFilter$SinkTokenStream object;
            static PyObject *wrap_Object(const TeeSinkTokenFilter$SinkTokenStream&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
