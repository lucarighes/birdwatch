#ifndef org_apache_lucene_search_uhighlight_TokenStreamOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_TokenStreamOffsetStrategy_H

#include "org/apache/lucene/search/uhighlight/AnalysisOffsetStrategy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        namespace uhighlight {
          class OffsetsEnum;
          class UHComponents;
        }
      }
      namespace index {
        class LeafReader;
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
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class TokenStreamOffsetStrategy : public ::org::apache::lucene::search::uhighlight::AnalysisOffsetStrategy {
           public:
            enum {
              mid_init$_969950458d02784c,
              mid_getOffsetsEnum_55596ccb3f6b81ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenStreamOffsetStrategy(jobject obj) : ::org::apache::lucene::search::uhighlight::AnalysisOffsetStrategy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenStreamOffsetStrategy(const TokenStreamOffsetStrategy& obj) : ::org::apache::lucene::search::uhighlight::AnalysisOffsetStrategy(obj) {}

            TokenStreamOffsetStrategy(const ::org::apache::lucene::search::uhighlight::UHComponents &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::uhighlight::OffsetsEnum getOffsetsEnum(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(TokenStreamOffsetStrategy);
          extern PyTypeObject *PY_TYPE(TokenStreamOffsetStrategy);

          class t_TokenStreamOffsetStrategy {
          public:
            PyObject_HEAD
            TokenStreamOffsetStrategy object;
            static PyObject *wrap_Object(const TokenStreamOffsetStrategy&);
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
